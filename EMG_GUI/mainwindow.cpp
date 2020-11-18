#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QDebug>
#include<QMessageBox>
#include<QtSerialPort/QSerialPort>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MySerial = new QSerialPort(this);

    //initialize serial buffer
    serialBuffer = "";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionConnect_Serial_Port_triggered()
{
    MySerial->setPortName("ttyUSB0");
    MySerial->setBaudRate(QSerialPort::Baud9600);
    MySerial->setDataBits(QSerialPort::Data8);
    MySerial->setParity(QSerialPort::NoParity);
    MySerial->setStopBits(QSerialPort::OneStop);
    MySerial->setFlowControl(QSerialPort::NoFlowControl);
    if(MySerial->open(QIODevice::ReadWrite)){
        qDebug()<<"Serial Port opened sucessfuly";
        ui->statusBar->showMessage("opend sucessfully", 500);
        QObject::connect(MySerial, &QSerialPort::readyRead, this, &MainWindow::readSerial);
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

    TxText = ui->textEdit->toPlainText();

    TxData = TxText.toUtf8();

    writeSerial();

}

void MainWindow::on_Clear_TextEdit_button_clicked()
{
    ui->textEdit->clear();
    ui->textBrowser->clear();
}

void MainWindow::readSerial()
{
    //qDebug() << "serial port works";

    const char* Tx_ptr = TxData.constData();

    if(Tx_ptr[0] == 'p'){
        qDebug()<< "Print out memory content";
        Memory_Disply();
    }
    else{
       String_Display();
    }

}

void MainWindow::String_Display(void)
{
    /*if(!(serialBuffer.endsWith(".")))
    {
        serialData = MySerial->readAll();
        serialBuffer += QString::fromStdString(serialData.toStdString());
        qDebug() << serialBuffer;
    }
    else
    {
        ui->textBrowser->append("<Rx> " + serialBuffer); // display
        serialBuffer = ""; // clear serial buffer
    }*/

    while(MySerial->bytesAvailable())
    {
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
    while(MySerial->bytesAvailable())
    {
        serialData.append(MySerial->readAll());
    }
    serialBuffer = QString::fromUtf8(serialData);
    QStringList list;
    list = serialBuffer.split("\n");
    int size;
    size = list.size();
    for(int i=0; i<size; i++)
    {
        ui->textBrowser->append(list[i]);
        qDebug()<<list[i];
    }

}

void MainWindow::on_actionCheck_Comm_triggered()
{
    TxText = "c";

    TxData = TxText.toUtf8();

    writeSerial();
}

void MainWindow::on_actionRun_triggered()
{
    TxText = "r";

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

}

void MainWindow::on_actionSave_Data_triggered()
{

}

void MainWindow::on_actionClear_Plot_triggered()
{

}
