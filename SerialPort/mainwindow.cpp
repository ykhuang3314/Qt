#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QMessageBox>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MySerial = new QSerialPort(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ConnectUART_Button_clicked()
{
    MySerial->setPortName("ttyUSB0");
    MySerial->setBaudRate(QSerialPort::Baud9600);
    MySerial->setDataBits(QSerialPort::Data8);
    MySerial->setParity(QSerialPort::NoParity);
    MySerial->setStopBits(QSerialPort::OneStop);
    MySerial->setFlowControl(QSerialPort::NoFlowControl);
    if(MySerial->open(QIODevice::ReadWrite)){
        qDebug()<<"Serial Port opened sucessfuly";
        ui->statusBar->showMessage("opend sucessfully", 1000);
    }
    else{
        qDebug()<<"Serial Port opened unsucessfuly";
        QMessageBox::critical(this, "Error", "Fails to open serial port");
    }

}

void MainWindow::on_DisconnectUART_Button_clicked()
{
    if(MySerial->isOpen())
        MySerial->close();
    ui->statusBar->showMessage("Serial port disconnected");
}

void MainWindow::on_TestUART_button_clicked()
{
    //send a test data
    QString test = "test";
    QByteArray TxData(test.toUtf8());
    MySerial->write(TxData);

    QByteArray RxData;
    RxData = MySerial->readAll();
    ui->textBrowser->append(RxData);

}
