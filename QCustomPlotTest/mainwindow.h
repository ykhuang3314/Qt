#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qcustomplot.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void SimplePlot(QCustomPlot *CustomPlot);
    void MultiPlot(QCustomPlot *CustomPlot);
    void MultiAxes(QCustomPlot *CustomPlot);
    void MultiAxes2(QCustomPlot *CustomPlot);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H