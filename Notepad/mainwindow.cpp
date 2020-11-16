#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    File_Path = "";
    ui->textEdit->setText("");
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
    ui->textEdit->setText(text);
    file.close();

}

void MainWindow::on_actionSave_triggered()
{
    QFile file(File_Path);
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this, "Warring", "file is not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void MainWindow::on_actionSave_As_triggered()
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
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionAbout_Notepad_triggered()
{
    QString about_text;
    about_text = "Notepad v1.0\n";
    about_text+= "Auther: Yu-Kai Huang\n";
    about_text+= "Date: 2020-07-21\n";
    QMessageBox::about(this,"About Notepad", about_text);
}
