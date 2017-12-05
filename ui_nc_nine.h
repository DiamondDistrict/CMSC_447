/********************************************************************************
** Form generated from reading UI file 'nc_nine.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NC_NINE_H
#define UI_NC_NINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NC_Nine
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *NC_Nine)
    {
        if (NC_Nine->objectName().isEmpty())
            NC_Nine->setObjectName(QStringLiteral("NC_Nine"));
        NC_Nine->resize(700, 500);
        label = new QLabel(NC_Nine);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("nc09.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(NC_Nine);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(NC_Nine);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(NC_Nine);
        QObject::connect(zoomIn, SIGNAL(pressed()), NC_Nine, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), NC_Nine, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(NC_Nine);
    } // setupUi

    void retranslateUi(QDialog *NC_Nine)
    {
        NC_Nine->setWindowTitle(QApplication::translate("NC_Nine", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("NC_Nine", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("NC_Nine", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NC_Nine: public Ui_NC_Nine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NC_NINE_H
