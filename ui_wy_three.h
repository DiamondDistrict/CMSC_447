/********************************************************************************
** Form generated from reading UI file 'wy_three.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WY_THREE_H
#define UI_WY_THREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WY_Three
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *WY_Three)
    {
        if (WY_Three->objectName().isEmpty())
            WY_Three->setObjectName(QStringLiteral("WY_Three"));
        WY_Three->resize(700, 500);
        label = new QLabel(WY_Three);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("WY3.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(WY_Three);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(WY_Three);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(WY_Three);
        QObject::connect(zoomIn, SIGNAL(pressed()), WY_Three, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), WY_Three, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(WY_Three);
    } // setupUi

    void retranslateUi(QDialog *WY_Three)
    {
        WY_Three->setWindowTitle(QApplication::translate("WY_Three", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("WY_Three", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("WY_Three", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WY_Three: public Ui_WY_Three {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WY_THREE_H
