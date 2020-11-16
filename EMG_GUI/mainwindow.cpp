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

