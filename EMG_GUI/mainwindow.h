#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSerialPort/QSerialPort>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionConnect_Serial_Port_triggered();

    void on_actionDisconnect_Serial_Port_triggered();

private:
    Ui::MainWindow *ui;
    QSerialPort *MySerial;
};

#endif // MAINWINDOW_H
