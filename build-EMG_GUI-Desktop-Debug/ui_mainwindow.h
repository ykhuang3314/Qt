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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionADC_Self_Calibration;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_channel;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QRadioButton *radioButton_hex;
    QRadioButton *radioButton_dec;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *Rx_Tab;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *Send_button;
    QPushButton *Clear_TextEdit_button;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *Save_Button;
    QTextBrowser *textBrowser;
    QWidget *Plot_Tab;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(735, 575);
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
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/rec/image/open_file_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon11);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/rec/image/save_as_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon12);
        actionADC_Self_Calibration = new QAction(MainWindow);
        actionADC_Self_Calibration->setObjectName(QStringLiteral("actionADC_Self_Calibration"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/rec/image/calibration_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionADC_Self_Calibration->setIcon(icon13);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBox_channel = new QComboBox(centralWidget);
        comboBox_channel->setObjectName(QStringLiteral("comboBox_channel"));

        horizontalLayout_3->addWidget(comboBox_channel);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        radioButton_hex = new QRadioButton(centralWidget);
        radioButton_hex->setObjectName(QStringLiteral("radioButton_hex"));

        horizontalLayout_2->addWidget(radioButton_hex);

        radioButton_dec = new QRadioButton(centralWidget);
        radioButton_dec->setObjectName(QStringLiteral("radioButton_dec"));

        horizontalLayout_2->addWidget(radioButton_dec);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Rx_Tab = new QWidget();
        Rx_Tab->setObjectName(QStringLiteral("Rx_Tab"));
        verticalLayout_2 = new QVBoxLayout(Rx_Tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Rx_Tab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Rx_Tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        Send_button = new QPushButton(Rx_Tab);
        Send_button->setObjectName(QStringLiteral("Send_button"));

        horizontalLayout->addWidget(Send_button);

        Clear_TextEdit_button = new QPushButton(Rx_Tab);
        Clear_TextEdit_button->setObjectName(QStringLiteral("Clear_TextEdit_button"));

        horizontalLayout->addWidget(Clear_TextEdit_button);

        label_2 = new QLabel(Rx_Tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(Rx_Tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        Save_Button = new QPushButton(Rx_Tab);
        Save_Button->setObjectName(QStringLiteral("Save_Button"));

        horizontalLayout->addWidget(Save_Button);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(Rx_Tab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(Rx_Tab, QString());
        Plot_Tab = new QWidget();
        Plot_Tab->setObjectName(QStringLiteral("Plot_Tab"));
        tabWidget->addTab(Plot_Tab, QString());

        verticalLayout_3->addWidget(tabWidget);


        verticalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 735, 22));
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
        menuMenu->addAction(actionADC_Self_Calibration);
        menuMenu->addAction(actionErase_Memory);
        menuMenu->addAction(actionRun);
        menuMenu->addAction(actionPause);
        menuMenu->addAction(actionPlot);
        menuMenu->addAction(actionClear_Plot);
        menuMenu->addSeparator();
        menuMenu->addAction(actionOpen);
        menuMenu->addAction(actionSave_as);
        menuMenu->addAction(actionSave_Data);
        menuMenu->addSeparator();
        menuMenu->addAction(actionExit);
        mainToolBar->addAction(actionConnect_Serial_Port);
        mainToolBar->addAction(actionDisconnect_Serial_Port);
        mainToolBar->addAction(actionCheck_Comm);
        mainToolBar->addAction(actionIntan_Initialization);
        mainToolBar->addAction(actionADC_Self_Calibration);
        mainToolBar->addAction(actionErase_Memory);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRun);
        mainToolBar->addAction(actionPause);
        mainToolBar->addAction(actionPlot);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave_Data);
        mainToolBar->addAction(actionSave_as);
        mainToolBar->addAction(actionClear_Plot);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


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
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", Q_NULLPTR));
        actionADC_Self_Calibration->setText(QApplication::translate("MainWindow", "ADC Self-Calibration", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Number of Channel:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Set", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Output format", Q_NULLPTR));
        radioButton_hex->setText(QApplication::translate("MainWindow", "Hex", Q_NULLPTR));
        radioButton_dec->setText(QApplication::translate("MainWindow", "Decimal", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Input:", Q_NULLPTR));
        Send_button->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        Clear_TextEdit_button->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "File Name:", Q_NULLPTR));
        Save_Button->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
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
