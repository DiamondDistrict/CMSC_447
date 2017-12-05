/********************************************************************************
** Form generated from reading UI file 'md_sixteen.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MD_SIXTEEN_H
#define UI_MD_SIXTEEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MD_Sixteen
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *MD_Sixteen)
    {
        if (MD_Sixteen->objectName().isEmpty())
            MD_Sixteen->setObjectName(QStringLiteral("MD_Sixteen"));
        MD_Sixteen->resize(700, 500);
        label = new QLabel(MD_Sixteen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("MD16.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(MD_Sixteen);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(MD_Sixteen);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(MD_Sixteen);
        QObject::connect(zoomIn, SIGNAL(pressed()), MD_Sixteen, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), MD_Sixteen, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MD_Sixteen);
    } // setupUi

    void retranslateUi(QDialog *MD_Sixteen)
    {
        MD_Sixteen->setWindowTitle(QApplication::translate("MD_Sixteen", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("MD_Sixteen", "+ ", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("MD_Sixteen", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MD_Sixteen: public Ui_MD_Sixteen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MD_SIXTEEN_H
