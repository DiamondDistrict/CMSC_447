/********************************************************************************
** Form generated from reading UI file 'wy_two.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WY_TWO_H
#define UI_WY_TWO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WY_Two
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *WY_Two)
    {
        if (WY_Two->objectName().isEmpty())
            WY_Two->setObjectName(QStringLiteral("WY_Two"));
        WY_Two->resize(700, 500);
        label = new QLabel(WY_Two);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("WY2.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(WY_Two);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(WY_Two);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(WY_Two);
        QObject::connect(zoomIn, SIGNAL(pressed()), WY_Two, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), WY_Two, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(WY_Two);
    } // setupUi

    void retranslateUi(QDialog *WY_Two)
    {
        WY_Two->setWindowTitle(QApplication::translate("WY_Two", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("WY_Two", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("WY_Two", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WY_Two: public Ui_WY_Two {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WY_TWO_H
