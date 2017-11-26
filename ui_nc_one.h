/********************************************************************************
** Form generated from reading UI file 'nc_one.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NC_ONE_H
#define UI_NC_ONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NC_One
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *NC_One)
    {
        if (NC_One->objectName().isEmpty())
            NC_One->setObjectName(QStringLiteral("NC_One"));
        NC_One->resize(700, 500);
        label = new QLabel(NC_One);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("North Carolina Outline.gif")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(NC_One);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(NC_One);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(NC_One);
        QObject::connect(zoomIn, SIGNAL(pressed()), NC_One, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), NC_One, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(NC_One);
    } // setupUi

    void retranslateUi(QDialog *NC_One)
    {
        NC_One->setWindowTitle(QApplication::translate("NC_One", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("NC_One", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("NC_One", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NC_One: public Ui_NC_One {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NC_ONE_H
