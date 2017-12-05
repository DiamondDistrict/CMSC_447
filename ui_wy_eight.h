/********************************************************************************
** Form generated from reading UI file 'wy_eight.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WY_EIGHT_H
#define UI_WY_EIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WY_Eight
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *WY_Eight)
    {
        if (WY_Eight->objectName().isEmpty())
            WY_Eight->setObjectName(QStringLiteral("WY_Eight"));
        WY_Eight->resize(700, 500);
        label = new QLabel(WY_Eight);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("WY8.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(WY_Eight);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(WY_Eight);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(WY_Eight);
        QObject::connect(zoomIn, SIGNAL(pressed()), WY_Eight, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), WY_Eight, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(WY_Eight);
    } // setupUi

    void retranslateUi(QDialog *WY_Eight)
    {
        WY_Eight->setWindowTitle(QApplication::translate("WY_Eight", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("WY_Eight", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("WY_Eight", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WY_Eight: public Ui_WY_Eight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WY_EIGHT_H
