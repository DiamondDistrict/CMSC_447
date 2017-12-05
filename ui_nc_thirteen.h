/********************************************************************************
** Form generated from reading UI file 'nc_thirteen.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NC_THIRTEEN_H
#define UI_NC_THIRTEEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NC_Thirteen
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *NC_Thirteen)
    {
        if (NC_Thirteen->objectName().isEmpty())
            NC_Thirteen->setObjectName(QStringLiteral("NC_Thirteen"));
        NC_Thirteen->resize(700, 500);
        label = new QLabel(NC_Thirteen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("nc13.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(NC_Thirteen);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(NC_Thirteen);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(NC_Thirteen);
        QObject::connect(zoomIn, SIGNAL(pressed()), NC_Thirteen, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), NC_Thirteen, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(NC_Thirteen);
    } // setupUi

    void retranslateUi(QDialog *NC_Thirteen)
    {
        NC_Thirteen->setWindowTitle(QApplication::translate("NC_Thirteen", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("NC_Thirteen", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("NC_Thirteen", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NC_Thirteen: public Ui_NC_Thirteen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NC_THIRTEEN_H
