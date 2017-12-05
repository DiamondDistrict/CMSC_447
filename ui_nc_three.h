/********************************************************************************
** Form generated from reading UI file 'nc_three.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NC_THREE_H
#define UI_NC_THREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NC_Three
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *NC_Three)
    {
        if (NC_Three->objectName().isEmpty())
            NC_Three->setObjectName(QStringLiteral("NC_Three"));
        NC_Three->resize(700, 500);
        label = new QLabel(NC_Three);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("nc03.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(NC_Three);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(NC_Three);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(NC_Three);
        QObject::connect(zoomIn, SIGNAL(pressed()), NC_Three, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), NC_Three, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(NC_Three);
    } // setupUi

    void retranslateUi(QDialog *NC_Three)
    {
        NC_Three->setWindowTitle(QApplication::translate("NC_Three", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("NC_Three", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("NC_Three", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NC_Three: public Ui_NC_Three {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NC_THREE_H
