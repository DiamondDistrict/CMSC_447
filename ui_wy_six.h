/********************************************************************************
** Form generated from reading UI file 'wy_six.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WY_SIX_H
#define UI_WY_SIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WY_Six
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *WY_Six)
    {
        if (WY_Six->objectName().isEmpty())
            WY_Six->setObjectName(QStringLiteral("WY_Six"));
        WY_Six->resize(700, 500);
        label = new QLabel(WY_Six);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("WY6.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(WY_Six);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(WY_Six);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(WY_Six);
        QObject::connect(zoomIn, SIGNAL(pressed()), WY_Six, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), WY_Six, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(WY_Six);
    } // setupUi

    void retranslateUi(QDialog *WY_Six)
    {
        WY_Six->setWindowTitle(QApplication::translate("WY_Six", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("WY_Six", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("WY_Six", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WY_Six: public Ui_WY_Six {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WY_SIX_H
