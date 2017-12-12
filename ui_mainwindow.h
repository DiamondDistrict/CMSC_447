/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionMD2;
    QAction *actionMD4;
    QAction *actionMD6;
    QAction *actionMD8;
    QAction *actionMD10;
    QAction *actionMD12;
    QAction *actionMD14;
    QAction *actionMD16;
    QAction *actionNC13;
    QAction *actionNC1;
    QAction *actionNC3;
    QAction *actionNC5;
    QAction *actionNC7;
    QAction *actionNC9;
    QAction *actionNC11;
    QAction *actionNC15;
    QAction *actionWY1;
    QAction *actionWY2;
    QAction *actionWY3;
    QAction *actionWY4;
    QAction *actionWY5;
    QAction *actionWY6;
    QAction *actionWY7;
    QAction *actionWY8;
    QAction *actionMaryland;
    QAction *actionNorth_Carolina;
    QAction *actionWyoming;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuSelect_State;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 500);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionMD2 = new QAction(MainWindow);
        actionMD2->setObjectName(QStringLiteral("actionMD2"));
        actionMD4 = new QAction(MainWindow);
        actionMD4->setObjectName(QStringLiteral("actionMD4"));
        actionMD6 = new QAction(MainWindow);
        actionMD6->setObjectName(QStringLiteral("actionMD6"));
        actionMD8 = new QAction(MainWindow);
        actionMD8->setObjectName(QStringLiteral("actionMD8"));
        actionMD10 = new QAction(MainWindow);
        actionMD10->setObjectName(QStringLiteral("actionMD10"));
        actionMD12 = new QAction(MainWindow);
        actionMD12->setObjectName(QStringLiteral("actionMD12"));
        actionMD14 = new QAction(MainWindow);
        actionMD14->setObjectName(QStringLiteral("actionMD14"));
        actionMD16 = new QAction(MainWindow);
        actionMD16->setObjectName(QStringLiteral("actionMD16"));
        actionNC13 = new QAction(MainWindow);
        actionNC13->setObjectName(QStringLiteral("actionNC13"));
        actionNC1 = new QAction(MainWindow);
        actionNC1->setObjectName(QStringLiteral("actionNC1"));
        actionNC3 = new QAction(MainWindow);
        actionNC3->setObjectName(QStringLiteral("actionNC3"));
        actionNC5 = new QAction(MainWindow);
        actionNC5->setObjectName(QStringLiteral("actionNC5"));
        actionNC7 = new QAction(MainWindow);
        actionNC7->setObjectName(QStringLiteral("actionNC7"));
        actionNC9 = new QAction(MainWindow);
        actionNC9->setObjectName(QStringLiteral("actionNC9"));
        actionNC11 = new QAction(MainWindow);
        actionNC11->setObjectName(QStringLiteral("actionNC11"));
        actionNC15 = new QAction(MainWindow);
        actionNC15->setObjectName(QStringLiteral("actionNC15"));
        actionWY1 = new QAction(MainWindow);
        actionWY1->setObjectName(QStringLiteral("actionWY1"));
        actionWY2 = new QAction(MainWindow);
        actionWY2->setObjectName(QStringLiteral("actionWY2"));
        actionWY3 = new QAction(MainWindow);
        actionWY3->setObjectName(QStringLiteral("actionWY3"));
        actionWY4 = new QAction(MainWindow);
        actionWY4->setObjectName(QStringLiteral("actionWY4"));
        actionWY5 = new QAction(MainWindow);
        actionWY5->setObjectName(QStringLiteral("actionWY5"));
        actionWY6 = new QAction(MainWindow);
        actionWY6->setObjectName(QStringLiteral("actionWY6"));
        actionWY7 = new QAction(MainWindow);
        actionWY7->setObjectName(QStringLiteral("actionWY7"));
        actionWY8 = new QAction(MainWindow);
        actionWY8->setObjectName(QStringLiteral("actionWY8"));
        actionMaryland = new QAction(MainWindow);
        actionMaryland->setObjectName(QStringLiteral("actionMaryland"));
        actionNorth_Carolina = new QAction(MainWindow);
        actionNorth_Carolina->setObjectName(QStringLiteral("actionNorth_Carolina"));
        actionWyoming = new QAction(MainWindow);
        actionWyoming->setObjectName(QStringLiteral("actionWyoming"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 500, 450));
        label->setPixmap(QPixmap(QString::fromUtf8("Home Page.png")));
        label->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 26));
        menuSelect_State = new QMenu(menubar);
        menuSelect_State->setObjectName(QStringLiteral("menuSelect_State"));
        menuSelect_State->setGeometry(QRect(339, 116, 159, 150));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSelect_State->menuAction());
        menuSelect_State->addAction(actionMaryland);
        menuSelect_State->addAction(actionNorth_Carolina);
        menuSelect_State->addAction(actionWyoming);
        menuSelect_State->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionMD2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        actionMD4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        actionMD6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        actionMD8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        actionMD10->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        actionMD12->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        actionMD14->setText(QApplication::translate("MainWindow", "14", Q_NULLPTR));
        actionMD16->setText(QApplication::translate("MainWindow", "16", Q_NULLPTR));
        actionNC13->setText(QApplication::translate("MainWindow", "13", Q_NULLPTR));
        actionNC1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        actionNC3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        actionNC5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        actionNC7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        actionNC9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        actionNC11->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        actionNC15->setText(QApplication::translate("MainWindow", "15", Q_NULLPTR));
        actionWY1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        actionWY2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        actionWY3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        actionWY4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        actionWY5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        actionWY6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        actionWY7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        actionWY8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        actionMaryland->setText(QApplication::translate("MainWindow", "Maryland", Q_NULLPTR));
        actionNorth_Carolina->setText(QApplication::translate("MainWindow", "North Carolina", Q_NULLPTR));
        actionWyoming->setText(QApplication::translate("MainWindow", "Wyoming", Q_NULLPTR));
        label->setText(QString());
        menuSelect_State->setTitle(QApplication::translate("MainWindow", "Select State", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
