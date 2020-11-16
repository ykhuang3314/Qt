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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
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
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(562, 454);
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
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 562, 22));
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
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
