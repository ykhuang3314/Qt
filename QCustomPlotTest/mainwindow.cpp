#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPen>
#include <QtMath>
#include <QFont>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SimplePlot(ui->CustomPlot1);
    MultiPlot(ui->CustomPlot2);
    MultiAxes(ui->CustomPlot3);




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SimplePlot(QCustomPlot *CustomPlot){
    int size =101;
    QVector<double> x(size), y(size);
    for(int i=0; i<size; i++ ){
        x[i] = i/50.0-1;
        y[i] = x[i]*x[i];
    }
    CustomPlot->addGraph();
    CustomPlot->graph(0)->setData(x,y);
    CustomPlot->graph(0)->setScatterStyle(QCPScatterStyle::ssDiamond);
    CustomPlot->graph(0)->setPen(QPen(Qt::yellow));
    CustomPlot->xAxis->setLabel("x");
    CustomPlot->yAxis->setLabel("y");
    CustomPlot->xAxis->setRange(-1,1);
    CustomPlot->xAxis->setTickLength(0,5);
    CustomPlot->yAxis->setRange(0,1);
    CustomPlot->yAxis->setTickLength(0,5);
    CustomPlot->xAxis2->setVisible(true);
    CustomPlot->yAxis2->setVisible(true);
    CustomPlot->xAxis2->setTickLabels(false);
    CustomPlot->yAxis2->setTickLabels(false);
    connect(CustomPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), CustomPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(CustomPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), CustomPlot->yAxis2, SLOT(setRange(QCPRange)));
    CustomPlot->replot();
}

void MainWindow::MultiPlot(QCustomPlot *CustomPlot){
    CustomPlot->addGraph();
    CustomPlot->graph(0)->setPen(QPen(Qt::green));
    CustomPlot->graph(0)->setBrush(QBrush(QColor(0,255,0,50)));
    CustomPlot->addGraph();
    CustomPlot->graph(1)->setPen(QPen(Qt::blue));

    QVector<double> x(251), y0(251), y1(251);
    for(int i=0; i<251; i++){
        x[i]=i;
        y0[i]=qExp(-i/150.0)*qCos(i/10.0);
        y1[i]=qExp(-i/150.0);
    }
    CustomPlot->xAxis2->setVisible(true);
    CustomPlot->yAxis2->setVisible(true);
    CustomPlot->xAxis2->setTickLabels(false);
    CustomPlot->yAxis2->setTickLabels(false);
    connect(CustomPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), CustomPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(CustomPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), CustomPlot->yAxis2, SLOT(setRange(QCPRange)));
    CustomPlot->graph(0)->setData(x,y0);
    CustomPlot->graph(1)->setData(x,y1);
    CustomPlot->graph(0)->rescaleAxes();
    //CustomPlot->graph(1)->rescaleAxes(true);
    CustomPlot->setInteractions(QCP::iRangeZoom|QCP::iRangeDrag|QCP::iSelectPlottables);
}

void MainWindow::MultiAxes(QCustomPlot *CustomPlot){

    CustomPlot->legend->setVisible(true);
    QFont legend_font = font();
    legend_font.setPointSize(8);
    CustomPlot->legend->setFont(legend_font);
    CustomPlot->legend->setBrush(QBrush(QColor(255,255,255,200)));

    CustomPlot->addGraph(CustomPlot->yAxis, CustomPlot->xAxis);
    CustomPlot->graph(0)->setPen(QPen(Qt::blue));
    CustomPlot->graph(0)->setLineStyle(QCPGraph::lsLine);
    CustomPlot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, Qt::yellow, Qt::white, 6));
    CustomPlot->graph(0)->setName("Left Maxwell Function");

    CustomPlot->addGraph();
    CustomPlot->graph(1)->setPen(QPen(Qt::red));
    CustomPlot->graph(1)->setLineStyle(QCPGraph::lsStepCenter);
    CustomPlot->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 5));
    CustomPlot->graph(1)->setName("Bottom Maxwell Function");
    QCPErrorBars *errorBars = new QCPErrorBars(CustomPlot->xAxis, CustomPlot->yAxis);
    errorBars->removeFromLegend();
    errorBars->setDataPlottable(CustomPlot->graph(1));

    CustomPlot->addGraph(CustomPlot->xAxis2, CustomPlot->yAxis2);
    CustomPlot->graph(2)->setPen(QPen(Qt::black));
    CustomPlot->graph(2)->setName("High frequency sine");


    CustomPlot->addGraph(CustomPlot->xAxis2, CustomPlot->yAxis2);
    QPen GreenDotPen;
    GreenDotPen.setColor(QColor(30,40,255,150));
    GreenDotPen.setStyle(Qt::DotLine);
    GreenDotPen.setWidthF(3);
    CustomPlot->graph(3)->setPen(GreenDotPen);
    CustomPlot->graph(3)->setName("Sine envelope");

    CustomPlot->addGraph(CustomPlot->yAxis2, CustomPlot->xAxis2);
    CustomPlot->graph(4)->setPen(QColor(90,90,90,255));
    CustomPlot->graph(4)->setLineStyle(QCPGraph::lsNone);
    CustomPlot->graph(4)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDiamond, 5));
    CustomPlot->graph(4)->setName("Random data");

    QVector<double> x0(25), y0(25);
    QVector<double> x1(15), y1(15), y1err(15);
    QVector<double> x2(250), y2(250);
    QVector<double> x3(250), y3(250);
    QVector<double> x4(250), y4(250);
    for (int i=0; i<25; ++i) // data for graph 0
    {
      x0[i] = 3*i/25.0;
      y0[i] = qExp(-x0[i]*x0[i]*0.8)*(x0[i]*x0[i]+x0[i]);
    }
    for (int i=0; i<15; ++i) // data for graph 1
    {
      x1[i] = 3*i/15.0;;
      y1[i] = qExp(-x1[i]*x1[i])*(x1[i]*x1[i])*2.6;
      y1err[i] = y1[i]*0.25;
    }
    for (int i=0; i<250; ++i) // data for graphs 2, 3 and 4
    {
      x2[i] = i/250.0*3*M_PI;
      x3[i] = x2[i];
      x4[i] = i/250.0*100-50;
      y2[i] = qSin(x2[i]*12)*qCos(x2[i])*10;
      y3[i] = qCos(x3[i])*10;
      y4[i] = 0.01*x4[i]*x4[i] + 1.5*(rand()/(double)RAND_MAX-0.5) + 1.5*M_PI;
    }
    // pass data points to graphs:
    CustomPlot->graph(0)->setData(x0, y0);
    CustomPlot->graph(1)->setData(x1, y1);
    errorBars->setData(y1err);
    CustomPlot->graph(2)->setData(x2, y2);
    CustomPlot->graph(3)->setData(x3, y3);
    CustomPlot->graph(4)->setData(x4, y4);
    // activate top and right axes, which are invisible by default:
    CustomPlot->xAxis2->setVisible(true);
    CustomPlot->yAxis2->setVisible(true);
    // set ranges appropriate to show data:
    CustomPlot->xAxis->setRange(0, 2.7);
    CustomPlot->yAxis->setRange(0, 2.6);
    CustomPlot->xAxis2->setRange(0, 3.0*M_PI);
    CustomPlot->yAxis2->setRange(-70, 35);
    // set pi ticks on top axis:
    CustomPlot->xAxis2->setTicker(QSharedPointer<QCPAxisTickerPi>(new QCPAxisTickerPi));
    // add title layout element:
    CustomPlot->plotLayout()->insertRow(0);
    CustomPlot->plotLayout()->addElement(0, 0, new QCPTextElement(CustomPlot, "Way too many graphs in one plot", QFont("sans", 12, QFont::Bold)));
    // set labels:
    CustomPlot->xAxis->setLabel("Bottom axis with outward ticks");
    CustomPlot->yAxis->setLabel("Left axis label");
    CustomPlot->xAxis2->setLabel("Top axis label");
    CustomPlot->yAxis2->setLabel("Right axis label");
    // make ticks on bottom axis go outward:
    CustomPlot->xAxis->setTickLength(0, 5);
    CustomPlot->xAxis->setSubTickLength(0, 3);
    // make ticks on right axis go inward and outward:
    CustomPlot->yAxis2->setTickLength(3, 3);
    CustomPlot->yAxis2->setSubTickLength(1, 1);
    CustomPlot->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom|QCP::iSelectPlottables);

}

void MainWindow::MultiAxes2(QCustomPlot *customPlot){

    customPlot->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom)); // period as decimal separator and comma as thousand separator
    customPlot->legend->setVisible(true);
    QFont legendFont = font();  // start out with MainWindow's font..
    legendFont.setPointSize(9); // and make a bit smaller for legend
    customPlot->legend->setFont(legendFont);
    customPlot->legend->setBrush(QBrush(QColor(255,255,255,230)));
    // by default, the legend is in the inset layout of the main axis rect. So this is how we access it to change legend placement:
    customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignBottom|Qt::AlignRight);

    // setup for graph 0: key axis left, value axis bottom
    // will contain left maxwell-like function
    customPlot->addGraph(customPlot->yAxis, customPlot->xAxis);
    customPlot->graph(0)->setPen(QPen(QColor(255, 100, 0)));
    //customPlot->graph(0)->setBrush(QBrush(QPixmap("./balboa.jpg"))); // fill with texture of specified image
    customPlot->graph(0)->setLineStyle(QCPGraph::lsLine);
    customPlot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 5));
    customPlot->graph(0)->setName("Left maxwell function");

    // setup for graph 1: key axis bottom, value axis left (those are the default axes)
    // will contain bottom maxwell-like function with error bars
    customPlot->addGraph();
    customPlot->graph(1)->setPen(QPen(Qt::red));
    //customPlot->graph(1)->setBrush(QBrush(QPixmap("./balboa.jpg"))); // same fill as we used for graph 0
    customPlot->graph(1)->setLineStyle(QCPGraph::lsStepCenter);
    customPlot->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, Qt::red, Qt::white, 7));
    customPlot->graph(1)->setName("Bottom maxwell function");
    QCPErrorBars *errorBars = new QCPErrorBars(customPlot->xAxis, customPlot->yAxis);
    errorBars->removeFromLegend();
    errorBars->setDataPlottable(customPlot->graph(1));

    // setup for graph 2: key axis top, value axis right
    // will contain high frequency sine with low frequency beating:
    customPlot->addGraph(customPlot->xAxis2, customPlot->yAxis2);
    customPlot->graph(2)->setPen(QPen(Qt::blue));
    customPlot->graph(2)->setName("High frequency sine");

    // setup for graph 3: same axes as graph 2
    // will contain low frequency beating envelope of graph 2
    customPlot->addGraph(customPlot->xAxis2, customPlot->yAxis2);
    QPen blueDotPen;
    blueDotPen.setColor(QColor(30, 40, 255, 150));
    blueDotPen.setStyle(Qt::DotLine);
    blueDotPen.setWidthF(4);
    customPlot->graph(3)->setPen(blueDotPen);
    customPlot->graph(3)->setName("Sine envelope");

    // setup for graph 4: key axis right, value axis top
    // will contain parabolically distributed data points with some random perturbance
    customPlot->addGraph(customPlot->yAxis2, customPlot->xAxis2);
    customPlot->graph(4)->setPen(QColor(50, 50, 50, 255));
    customPlot->graph(4)->setLineStyle(QCPGraph::lsNone);
    customPlot->graph(4)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4));
    customPlot->graph(4)->setName("Some random data around\na quadratic function");

    // generate data, just playing with numbers, not much to learn here:
    QVector<double> x0(25), y0(25);
    QVector<double> x1(15), y1(15), y1err(15);
    QVector<double> x2(250), y2(250);
    QVector<double> x3(250), y3(250);
    QVector<double> x4(250), y4(250);
    for (int i=0; i<25; ++i) // data for graph 0
    {
      x0[i] = 3*i/25.0;
      y0[i] = qExp(-x0[i]*x0[i]*0.8)*(x0[i]*x0[i]+x0[i]);
    }
    for (int i=0; i<15; ++i) // data for graph 1
    {
      x1[i] = 3*i/15.0;;
      y1[i] = qExp(-x1[i]*x1[i])*(x1[i]*x1[i])*2.6;
      y1err[i] = y1[i]*0.25;
    }
    for (int i=0; i<250; ++i) // data for graphs 2, 3 and 4
    {
      x2[i] = i/250.0*3*M_PI;
      x3[i] = x2[i];
      x4[i] = i/250.0*100-50;
      y2[i] = qSin(x2[i]*12)*qCos(x2[i])*10;
      y3[i] = qCos(x3[i])*10;
      y4[i] = 0.01*x4[i]*x4[i] + 1.5*(rand()/(double)RAND_MAX-0.5) + 1.5*M_PI;
    }

    // pass data points to graphs:
    customPlot->graph(0)->setData(x0, y0);
    customPlot->graph(1)->setData(x1, y1);
    errorBars->setData(y1err);
    customPlot->graph(2)->setData(x2, y2);
    customPlot->graph(3)->setData(x3, y3);
    customPlot->graph(4)->setData(x4, y4);
    // activate top and right axes, which are invisible by default:
    customPlot->xAxis2->setVisible(true);
    customPlot->yAxis2->setVisible(true);
    // set ranges appropriate to show data:
    customPlot->xAxis->setRange(0, 2.7);
    customPlot->yAxis->setRange(0, 2.6);
    customPlot->xAxis2->setRange(0, 3.0*M_PI);
    customPlot->yAxis2->setRange(-70, 35);
    // set pi ticks on top axis:
    customPlot->xAxis2->setTicker(QSharedPointer<QCPAxisTickerPi>(new QCPAxisTickerPi));
    // add title layout element:
    customPlot->plotLayout()->insertRow(0);
    customPlot->plotLayout()->addElement(0, 0, new QCPTextElement(customPlot, "Way too many graphs in one plot", QFont("sans", 12, QFont::Bold)));
    // set labels:
    customPlot->xAxis->setLabel("Bottom axis with outward ticks");
    customPlot->yAxis->setLabel("Left axis label");
    customPlot->xAxis2->setLabel("Top axis label");
    customPlot->yAxis2->setLabel("Right axis label");
    // make ticks on bottom axis go outward:
    customPlot->xAxis->setTickLength(0, 5);
    customPlot->xAxis->setSubTickLength(0, 3);
    // make ticks on right axis go inward and outward:
    customPlot->yAxis2->setTickLength(3, 3);
    customPlot->yAxis2->setSubTickLength(1, 1);
}
