/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect_Serial_Port;
    QAction *actionDisconnect_Serial_Port;
    QAction *actionCheck_Comm;
    QAction *actionRun;
    QAction *actionPause;
    QAction *actionIntan_Initialization;
    QAction *actionErase_Memory;
    QAction *actionPlot;
    QAction *actionSave_Data;
    QAction *actionClear_Plot;
    QAction *actionExit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Rx_Tab;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *Send_button;
    QPushButton *Clear_TextEdit_button;
    QWidget *Plot_Tab;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(620, 508);
        actionConnect_Serial_Port = new QAction(MainWindow);
        actionConnect_Serial_Port->setObjectName(QStringLiteral("actionConnect_Serial_Port"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/image/connect_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect_Serial_Port->setIcon(icon);
        actionDisconnect_Serial_Port = new QAction(MainWindow);
        actionDisconnect_Serial_Port->setObjectName(QStringLiteral("actionDisconnect_Serial_Port"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/image/disconnect_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect_Serial_Port->setIcon(icon1);
        actionCheck_Comm = new QAction(MainWindow);
        actionCheck_Comm->setObjectName(QStringLiteral("actionCheck_Comm"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rec/image/check_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheck_Comm->setIcon(icon2);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/rec/image/run_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon3);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/rec/image/pause_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon4);
        actionIntan_Initialization = new QAction(MainWindow);
        actionIntan_Initialization->setObjectName(QStringLiteral("actionIntan_Initialization"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/rec/image/initialize_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIntan_Initialization->setIcon(icon5);
        actionErase_Memory = new QAction(MainWindow);
        actionErase_Memory->setObjectName(QStringLiteral("actionErase_Memory"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/rec/image/earse_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionErase_Memory->setIcon(icon6);
        actionPlot = new QAction(MainWindow);
        actionPlot->setObjectName(QStringLiteral("actionPlot"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/rec/image/plot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlot->setIcon(icon7);
        actionSave_Data = new QAction(MainWindow);
        actionSave_Data->setObjectName(QStringLiteral("actionSave_Data"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/rec/image/save_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Data->setIcon(icon8);
        actionClear_Plot = new QAction(MainWindow);
        actionClear_Plot->setObjectName(QStringLiteral("actionClear_Plot"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/rec/image/clear_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear_Plot->setIcon(icon9);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/rec/image/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 12, 601, 431));
        Rx_Tab = new QWidget();
        Rx_Tab->setObjectName(QStringLiteral("Rx_Tab"));
        textBrowser = new QTextBrowser(Rx_Tab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 50, 581, 321));
        widget = new QWidget(Rx_Tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 581, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);

        Send_button = new QPushButton(widget);
        Send_button->setObjectName(QStringLiteral("Send_button"));

        horizontalLayout->addWidget(Send_button);

        Clear_TextEdit_button = new QPushButton(widget);
        Clear_TextEdit_button->setObjectName(QStringLiteral("Clear_TextEdit_button"));

        horizontalLayout->addWidget(Clear_TextEdit_button);

        tabWidget->addTab(Rx_Tab, QString());
        Plot_Tab = new QWidget();
        Plot_Tab->setObjectName(QStringLiteral("Plot_Tab"));
        tabWidget->addTab(Plot_Tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 620, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionConnect_Serial_Port);
        menuMenu->addAction(actionDisconnect_Serial_Port);
        menuMenu->addAction(actionCheck_Comm);
        menuMenu->addAction(actionIntan_Initialization);
        menuMenu->addAction(actionErase_Memory);
        menuMenu->addAction(actionRun);
        menuMenu->addAction(actionPause);
        menuMenu->addAction(actionPlot);
        menuMenu->addAction(actionSave_Data);
        menuMenu->addAction(actionClear_Plot);
        menuMenu->addSeparator();
        menuMenu->addAction(actionExit);
        mainToolBar->addAction(actionConnect_Serial_Port);
        mainToolBar->addAction(actionDisconnect_Serial_Port);
        mainToolBar->addAction(actionCheck_Comm);
        mainToolBar->addAction(actionIntan_Initialization);
        mainToolBar->addAction(actionErase_Memory);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRun);
        mainToolBar->addAction(actionPause);
        mainToolBar->addAction(actionPlot);
        mainToolBar->addAction(actionSave_Data);
        mainToolBar->addAction(actionClear_Plot);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionConnect_Serial_Port->setText(QApplication::translate("MainWindow", "Connect Serial Port", Q_NULLPTR));
        actionDisconnect_Serial_Port->setText(QApplication::translate("MainWindow", "Disconnect Serial Port", Q_NULLPTR));
        actionCheck_Comm->setText(QApplication::translate("MainWindow", "Check Comm", Q_NULLPTR));
        actionRun->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        actionIntan_Initialization->setText(QApplication::translate("MainWindow", "Intan Initialization", Q_NULLPTR));
        actionErase_Memory->setText(QApplication::translate("MainWindow", "Erase Memory", Q_NULLPTR));
        actionPlot->setText(QApplication::translate("MainWindow", "Plot", Q_NULLPTR));
        actionSave_Data->setText(QApplication::translate("MainWindow", "Save Data", Q_NULLPTR));
        actionClear_Plot->setText(QApplication::translate("MainWindow", "Clear Plot", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Input:", Q_NULLPTR));
        Send_button->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        Clear_TextEdit_button->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Rx_Tab), QApplication::translate("MainWindow", "Rx", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Plot_Tab), QApplication::translate("MainWindow", "Plot", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
