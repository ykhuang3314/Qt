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

    void on_actionExit_triggered();

    void writeSerial();

    void on_Send_button_clicked();

    void on_Clear_TextEdit_button_clicked();

    void readSerial();

    void String_Display();

    void Memory_Disply();

    void Data_Organize();

    void on_actionCheck_Comm_triggered();

    void on_actionRun_triggered();

    void on_actionIntan_Initialization_triggered();

    void on_actionErase_Memory_triggered();

    void on_actionPlot_triggered();

    void on_actionSave_Data_triggered();

    void on_actionClear_Plot_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_as_triggered();

    void save_file();

    void setComboChannel();

    QString int_array_to_string(uint16_t array[], int size_of_array);

    // for testing
    void data_print_test(void);

    void on_Save_Button_clicked();

    void on_pushButton_clicked();

    void on_actionADC_Self_Calibration_triggered();

private:
    Ui::MainWindow *ui;
    QSerialPort *MySerial;
    QString TxText;
    QByteArray TxData;
    QByteArray serialData;
    QString serialBuffer;
    QString log;
    QList<QByteArray> DataList_byte;
    QList<uint16_t*> DatatList_16bit;
    QString File_Path;
    int No_Channel;

};

#endif // MAINWINDOW_H
