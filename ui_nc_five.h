/********************************************************************************
** Form generated from reading UI file 'nc_five.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NC_FIVE_H
#define UI_NC_FIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NC_Five
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *NC_Five)
    {
        if (NC_Five->objectName().isEmpty())
            NC_Five->setObjectName(QStringLiteral("NC_Five"));
        NC_Five->resize(700, 500);
        label = new QLabel(NC_Five);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("nc05.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(NC_Five);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(NC_Five);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(NC_Five);
        QObject::connect(zoomIn, SIGNAL(pressed()), NC_Five, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), NC_Five, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(NC_Five);
    } // setupUi

    void retranslateUi(QDialog *NC_Five)
    {
        NC_Five->setWindowTitle(QApplication::translate("NC_Five", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("NC_Five", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("NC_Five", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NC_Five: public Ui_NC_Five {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NC_FIVE_H
