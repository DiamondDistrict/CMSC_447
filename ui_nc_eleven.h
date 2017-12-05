/********************************************************************************
** Form generated from reading UI file 'nc_eleven.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NC_ELEVEN_H
#define UI_NC_ELEVEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NC_Eleven
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *NC_Eleven)
    {
        if (NC_Eleven->objectName().isEmpty())
            NC_Eleven->setObjectName(QStringLiteral("NC_Eleven"));
        NC_Eleven->resize(700, 500);
        label = new QLabel(NC_Eleven);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("nc11.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(NC_Eleven);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(NC_Eleven);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(NC_Eleven);
        QObject::connect(zoomIn, SIGNAL(pressed()), NC_Eleven, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), NC_Eleven, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(NC_Eleven);
    } // setupUi

    void retranslateUi(QDialog *NC_Eleven)
    {
        NC_Eleven->setWindowTitle(QApplication::translate("NC_Eleven", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("NC_Eleven", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("NC_Eleven", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NC_Eleven: public Ui_NC_Eleven {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NC_ELEVEN_H
