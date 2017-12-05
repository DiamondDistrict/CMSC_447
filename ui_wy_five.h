/********************************************************************************
** Form generated from reading UI file 'wy_five.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WY_FIVE_H
#define UI_WY_FIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WY_Five
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *WY_Five)
    {
        if (WY_Five->objectName().isEmpty())
            WY_Five->setObjectName(QStringLiteral("WY_Five"));
        WY_Five->resize(700, 500);
        label = new QLabel(WY_Five);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("WY5.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(WY_Five);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(WY_Five);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(WY_Five);
        QObject::connect(zoomIn, SIGNAL(pressed()), WY_Five, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), WY_Five, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(WY_Five);
    } // setupUi

    void retranslateUi(QDialog *WY_Five)
    {
        WY_Five->setWindowTitle(QApplication::translate("WY_Five", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("WY_Five", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("WY_Five", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WY_Five: public Ui_WY_Five {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WY_FIVE_H
