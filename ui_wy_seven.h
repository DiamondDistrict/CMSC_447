/********************************************************************************
** Form generated from reading UI file 'wy_seven.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WY_SEVEN_H
#define UI_WY_SEVEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WY_Seven
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *WY_Seven)
    {
        if (WY_Seven->objectName().isEmpty())
            WY_Seven->setObjectName(QStringLiteral("WY_Seven"));
        WY_Seven->resize(700, 500);
        label = new QLabel(WY_Seven);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("WY7.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(WY_Seven);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(WY_Seven);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(WY_Seven);
        QObject::connect(zoomIn, SIGNAL(pressed()), WY_Seven, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), WY_Seven, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(WY_Seven);
    } // setupUi

    void retranslateUi(QDialog *WY_Seven)
    {
        WY_Seven->setWindowTitle(QApplication::translate("WY_Seven", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("WY_Seven", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("WY_Seven", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WY_Seven: public Ui_WY_Seven {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WY_SEVEN_H
