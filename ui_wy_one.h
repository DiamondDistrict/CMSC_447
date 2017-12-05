/********************************************************************************
** Form generated from reading UI file 'wy_one.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WY_ONE_H
#define UI_WY_ONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WY_One
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *WY_One)
    {
        if (WY_One->objectName().isEmpty())
            WY_One->setObjectName(QStringLiteral("WY_One"));
        WY_One->resize(700, 500);
        label = new QLabel(WY_One);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("WY1.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(WY_One);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(WY_One);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(WY_One);
        QObject::connect(zoomIn, SIGNAL(pressed()), WY_One, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), WY_One, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(WY_One);
    } // setupUi

    void retranslateUi(QDialog *WY_One)
    {
        WY_One->setWindowTitle(QApplication::translate("WY_One", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("WY_One", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("WY_One", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WY_One: public Ui_WY_One {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WY_ONE_H
