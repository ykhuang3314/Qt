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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRun;
    QAction *actionPause;
    QAction *actionSave;
    QAction *actionDelete;
    QAction *actionExit_Program;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox_spich;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *comboBox_fsclk;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_spisetup;
    QLabel *label_spi;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_fH;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox_fL;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *comboBox_fdsp;
    QPushButton *pushButton_BW;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit_test;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menuMeasurement;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(891, 575);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/run_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/img/pause_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rec/img/save_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/rec/img/clear_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon3);
        actionExit_Program = new QAction(MainWindow);
        actionExit_Program->setObjectName(QStringLiteral("actionExit_Program"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/rec/img/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit_Program->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_2);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox_spich = new QComboBox(groupBox_2);
        comboBox_spich->setObjectName(QStringLiteral("comboBox_spich"));

        horizontalLayout->addWidget(comboBox_spich);


        horizontalLayout_8->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        comboBox_fsclk = new QComboBox(groupBox_2);
        comboBox_fsclk->setObjectName(QStringLiteral("comboBox_fsclk"));

        horizontalLayout_6->addWidget(comboBox_fsclk);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_spisetup = new QPushButton(groupBox_2);
        pushButton_spisetup->setObjectName(QStringLiteral("pushButton_spisetup"));

        horizontalLayout_7->addWidget(pushButton_spisetup);

        label_spi = new QLabel(groupBox_2);
        label_spi->setObjectName(QStringLiteral("label_spi"));

        horizontalLayout_7->addWidget(label_spi);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_9 = new QHBoxLayout(groupBox);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        comboBox_fH = new QComboBox(groupBox);
        comboBox_fH->setObjectName(QStringLiteral("comboBox_fH"));

        horizontalLayout_2->addWidget(comboBox_fH);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        comboBox_fL = new QComboBox(groupBox);
        comboBox_fL->setObjectName(QStringLiteral("comboBox_fL"));

        horizontalLayout_3->addWidget(comboBox_fL);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        comboBox_fdsp = new QComboBox(groupBox);
        comboBox_fdsp->setObjectName(QStringLiteral("comboBox_fdsp"));

        horizontalLayout_5->addWidget(comboBox_fdsp);

        pushButton_BW = new QPushButton(groupBox);
        pushButton_BW->setObjectName(QStringLiteral("pushButton_BW"));

        horizontalLayout_5->addWidget(pushButton_BW);


        horizontalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_9->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        plainTextEdit_test = new QPlainTextEdit(tab);
        plainTextEdit_test->setObjectName(QStringLiteral("plainTextEdit_test"));

        verticalLayout_2->addWidget(plainTextEdit_test);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 891, 26));
        menuMeasurement = new QMenu(menuBar);
        menuMeasurement->setObjectName(QStringLiteral("menuMeasurement"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMeasurement->menuAction());
        menuMeasurement->addAction(actionRun);
        menuMeasurement->addAction(actionPause);
        menuMeasurement->addAction(actionSave);
        menuMeasurement->addAction(actionDelete);
        menuMeasurement->addSeparator();
        menuMeasurement->addAction(actionExit_Program);
        mainToolBar->addAction(actionRun);
        mainToolBar->addAction(actionPause);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit_Program);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionRun->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        actionExit_Program->setText(QApplication::translate("MainWindow", "Exit Program", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "SPI ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Channel: ", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Clock Frequency:", Q_NULLPTR));
        pushButton_spisetup->setText(QApplication::translate("MainWindow", "Setup", Q_NULLPTR));
        label_spi->setText(QApplication::translate("MainWindow", "SPI status: ", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Bandwidth ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Upper Bandwidth:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Lower Bandwidth:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "DSP Cutoff:", Q_NULLPTR));
        pushButton_BW->setText(QApplication::translate("MainWindow", "Set", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Setup SPI", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Configuration", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Plot", Q_NULLPTR));
        menuMeasurement->setTitle(QApplication::translate("MainWindow", "Measurement", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
