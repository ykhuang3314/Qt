#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pic(":/Resource/Pic/kth_logo.png");
    int width = ui->label_pic->width();
    int height = ui->label_pic->height();
    ui->label_pic->setPixmap(pic.scaled(width, height, Qt::KeepAspectRatio));
    ui->statusBar->addPermanentWidget(ui->label_status);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if(username=="admin" && password=="admin"){
        QMessageBox::information(this, "Login", "Sucessful Login!");
        //hide();
        secDialog = new SecDialog(this);
        secDialog->show();
        ui->statusBar->showMessage("Sucessful Login!", 5000);
        ui->label_status->setText(":)");
    }
    else{
        QMessageBox::warning(this, "Login", "The username and password is not correct! Please enter them again.");
        ui->statusBar->showMessage("The username and password is not correct!", 5000);
        ui->label_status->setText(":(");
    }
}
