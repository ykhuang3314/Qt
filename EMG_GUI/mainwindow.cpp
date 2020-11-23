#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtSerialPort/QSerialPort>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>
#include <QTime>
#include <QList>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //this->setCentralWidget(ui->tabWidget);

    ui->setupUi(this);
    MySerial = new QSerialPort(this);

    //initialize serial buffer
    serialBuffer = "";

    setComboChannel();
    No_Channel = 32; //set default value
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setComboChannel()
{
    ui->comboBox_channel->clear();

    for(int i=1; i<33; i++){
        ui->comboBox_channel->addItem(QString::number(i));
    }
}

void MainWindow::on_actionConnect_Serial_Port_triggered()
{
    MySerial->setPortName("ttyUSB0");
    MySerial->setBaudRate(QSerialPort::Baud115200);
    MySerial->setDataBits(QSerialPort::Data8);
    MySerial->setParity(QSerialPort::NoParity);
    MySerial->setStopBits(QSerialPort::OneStop);
    MySerial->setFlowControl(QSerialPort::NoFlowControl);
    if(MySerial->open(QIODevice::ReadWrite)){
        qDebug()<<"Serial Port opened sucessfuly";
        ui->statusBar->showMessage("opend sucessfully", 500);
        QObject::connect(MySerial, &QSerialPort::readyRead, this, &MainWindow::readSerial);
        TxText = "t";
        TxData = TxText.toUtf8();
        writeSerial();
    }
    else{
        qDebug()<<"Serial Port opened unsucessfuly";
        QMessageBox::critical(this, "Error", "Fails to open serial port");
    }
}

void MainWindow::on_actionDisconnect_Serial_Port_triggered()
{
    if(MySerial->isOpen())
        MySerial->close();
    ui->statusBar->showMessage("Serial port disconnected", 500);
}


void MainWindow::on_actionExit_triggered()
{
   QMessageBox::StandardButton decision = QMessageBox::question(this, "Exit Program", "Do you want to exit?", QMessageBox::Yes|QMessageBox::No);
   if (decision==QMessageBox::Yes)
       QApplication::quit();
}

void MainWindow::writeSerial()
{
    MySerial->write(TxData);
    qDebug() << "writing data vai serial port";

    QString log_display;
    log_display = "<TX> " + TxText ;
    ui->textBrowser->append(log_display);
}

void MainWindow::on_Send_button_clicked()
{

    TxText = ui->lineEdit->text();

    TxData = TxText.toUtf8();

    writeSerial();

}

void MainWindow::on_Clear_TextEdit_button_clicked()
{
    ui->lineEdit->clear();
    ui->textBrowser->clear();
}

void MainWindow::readSerial()
{
    //qDebug() << "serial port works";

    const char* Tx_ptr = TxData.constData();

    if(Tx_ptr[0] == 'p'){
        //qDebug()<< "Print out memory content";
        Memory_Disply();
    }
    else{
       String_Display();
    }

}

void MainWindow::String_Display(void)
{

    while(MySerial->bytesAvailable())
    {
        qDebug() << "reading byte";
        serialData = MySerial->readAll();
        serialBuffer += QString::fromStdString(serialData.toStdString());
        if(serialData.contains("."))
        {
            ui->textBrowser->append("<Rx> " + serialBuffer);
            serialBuffer.clear();
            serialData.clear();
            break;
        }

    }
}

void MainWindow::Memory_Disply(void)
{
    bool isFinished(false);

    serialData = MySerial->readAll();
    for(int i=0 ; i<serialData.size(); i++ ){
        if(serialData[i] != 0x00)
            serialData.append(QString::fromStdString(serialData.toStdString()));
        else
            isFinished = true;
    }

    if(isFinished)
        Data_Organize();

}

void MainWindow::Data_Organize()
{
    QByteArray tmp;
    uint16_t *tmp_16bit;
    QString text;
    tmp_16bit = new uint16_t[No_Channel];
    int No_Row = serialData.size()/(2*No_Channel);
    qDebug() << "Received data: " << serialData.size() << " Bytes";

    for(int i = 0; i<No_Row; i++){
        tmp = serialData.mid(2*No_Channel*i, 2*No_Channel);

        if(ui->radioButton_hex->isChecked()){
            DataList_byte.append(tmp);
            text = tmp.toHex(' ');
            ui->textBrowser->append(text);
        }
        else if(ui->radioButton_dec->isChecked()){
            for(int j=0; j<No_Channel; j++)
                tmp_16bit[j] = (uint16_t)(tmp[2*j]<<8) + (uint16_t)tmp[2*j+1];
            DatatList_16bit.append(tmp_16bit);
            text = int_array_to_string(tmp_16bit, No_Channel);
            ui->textBrowser->append(text);
        }
    }
}

QString MainWindow::int_array_to_string(uint16_t array[], int size_of_array)
{
    QString returnstring = "";
    for (int index = 0; index < size_of_array; index++)
      returnstring += (QString::number(array[index], 10) + " ");
    return returnstring;
}
void MainWindow::data_print_test(void){

    int datasize = 256;

    for(int i=0; i<datasize; i++){
        serialData.append(i);
    }
    Data_Organize();
}

void MainWindow::on_actionCheck_Comm_triggered()
{
    TxText = "c";

    TxData = TxText.toUtf8();

    writeSerial();
}

void MainWindow::on_actionRun_triggered()
{
    TxText = "m";

    TxData = TxText.toUtf8();

    writeSerial();
}

void MainWindow::on_actionIntan_Initialization_triggered()
{
    TxText = "i";

    TxData = TxText.toUtf8();

    writeSerial();
}

void MainWindow::on_actionErase_Memory_triggered()
{
    TxText = "e";

    TxData = TxText.toUtf8();

    writeSerial();
}


void MainWindow::on_actionPlot_triggered()
{
    TxText = "p";

    TxData = TxText.toUtf8();

    writeSerial();
}


void MainWindow::on_actionClear_Plot_triggered()
{
    data_print_test();
}



// Read file and Save file related functions

void MainWindow::save_file()
{
    QDateTime meastime = QDateTime::currentDateTime();
    QString Path = ui->lineEdit_2->text() + meastime.toString(Qt::ISODate) + QString(".txt");
    qDebug() << Path << " is saved";
    QFile file(Path);
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this, "Warring", "file is not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textBrowser->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void MainWindow::on_actionSave_Data_triggered()
{
    save_file();
}

void MainWindow::on_Save_Button_clicked()
{
    save_file();
}

void MainWindow::on_actionOpen_triggered()
{
    QString filter = "All files(*.*) ;; Text file (*.txt)";
    QString file_name = QFileDialog::getOpenFileName(this, "Open a text file", QDir::homePath(), filter);
    QFile file(file_name);
    File_Path = file_name;
    if(!file.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this, "Warring", "file is not open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textBrowser->setText(text);

    file.close();
}

void MainWindow::on_actionSave_as_triggered()
{
    QString filter = "All files(*.*) ;; Text file (*.txt)";
    QString file_name = QFileDialog::getSaveFileName(this, "Open a text file", QDir::homePath(), filter);
    QFile file(file_name);
    File_Path = file_name;
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this, "Warring", "file is not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textBrowser->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_pushButton_clicked()
{
    No_Channel = ui->comboBox_channel->currentIndex()+1;
    QString text = QString::number(No_Channel) + "-channel measurment set.";
    ui->statusBar->showMessage(text, 500);
}
