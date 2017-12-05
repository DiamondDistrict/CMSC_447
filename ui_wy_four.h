/********************************************************************************
** Form generated from reading UI file 'wy_four.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WY_FOUR_H
#define UI_WY_FOUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WY_Four
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *WY_Four)
    {
        if (WY_Four->objectName().isEmpty())
            WY_Four->setObjectName(QStringLiteral("WY_Four"));
        WY_Four->resize(700, 500);
        label = new QLabel(WY_Four);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("WY4.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(WY_Four);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(WY_Four);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(WY_Four);
        QObject::connect(zoomIn, SIGNAL(pressed()), WY_Four, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), WY_Four, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(WY_Four);
    } // setupUi

    void retranslateUi(QDialog *WY_Four)
    {
        WY_Four->setWindowTitle(QApplication::translate("WY_Four", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("WY_Four", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("WY_Four", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WY_Four: public Ui_WY_Four {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WY_FOUR_H
