#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton1_clicked()
{
    ui->Button1_status->setText("Button is clicked");
}

void MainWindow::on_Button_Exit_clicked()
{
    //QMessageBox::aboutQt(this,"Version");
    QMessageBox::StandardButton decision = QMessageBox::question(this, "Exit", "Do you want to exit", QMessageBox::Yes | QMessageBox::No);
    if (decision == QMessageBox::Yes) {
        QApplication::quit();
    }
    else {
        qDebug() << "No is clicked by the user!";
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    dialog2 = new Dialog2(this);
    dialog2->show();
}
