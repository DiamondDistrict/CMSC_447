/********************************************************************************
** Form generated from reading UI file 'nc_seven.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NC_SEVEN_H
#define UI_NC_SEVEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NC_Seven
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *NC_Seven)
    {
        if (NC_Seven->objectName().isEmpty())
            NC_Seven->setObjectName(QStringLiteral("NC_Seven"));
        NC_Seven->resize(700, 500);
        label = new QLabel(NC_Seven);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("nc07.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(NC_Seven);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(NC_Seven);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(NC_Seven);
        QObject::connect(zoomIn, SIGNAL(pressed()), NC_Seven, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), NC_Seven, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(NC_Seven);
    } // setupUi

    void retranslateUi(QDialog *NC_Seven)
    {
        NC_Seven->setWindowTitle(QApplication::translate("NC_Seven", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("NC_Seven", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("NC_Seven", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NC_Seven: public Ui_NC_Seven {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NC_SEVEN_H
