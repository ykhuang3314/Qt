#include "secdialog.h"
#include "ui_secdialog.h"
#include <QMessageBox>

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_Exit_clicked()
{
    QMessageBox::StandardButton decision = QMessageBox::question(this, "Exit", "Do you want to exit?", QMessageBox::Yes | QMessageBox::No);
    if (decision == QMessageBox::Yes) {
        QApplication::quit();
    }
}
