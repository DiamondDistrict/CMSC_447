/********************************************************************************
** Form generated from reading UI file 'nc_fifteen.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NC_FIFTEEN_H
#define UI_NC_FIFTEEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NC_Fifteen
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *NC_Fifteen)
    {
        if (NC_Fifteen->objectName().isEmpty())
            NC_Fifteen->setObjectName(QStringLiteral("NC_Fifteen"));
        NC_Fifteen->resize(700, 500);
        label = new QLabel(NC_Fifteen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("nc15.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(NC_Fifteen);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(NC_Fifteen);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(NC_Fifteen);
        QObject::connect(zoomIn, SIGNAL(pressed()), NC_Fifteen, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), NC_Fifteen, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(NC_Fifteen);
    } // setupUi

    void retranslateUi(QDialog *NC_Fifteen)
    {
        NC_Fifteen->setWindowTitle(QApplication::translate("NC_Fifteen", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("NC_Fifteen", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("NC_Fifteen", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NC_Fifteen: public Ui_NC_Fifteen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NC_FIFTEEN_H
