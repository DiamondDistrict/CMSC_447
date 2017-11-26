/********************************************************************************
** Form generated from reading UI file 'md_twelve.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MD_TWELVE_H
#define UI_MD_TWELVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MD_Twelve
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *MD_Twelve)
    {
        if (MD_Twelve->objectName().isEmpty())
            MD_Twelve->setObjectName(QStringLiteral("MD_Twelve"));
        MD_Twelve->resize(700, 500);
        label = new QLabel(MD_Twelve);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("Maryland 2 Outline.gif")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(MD_Twelve);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(MD_Twelve);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(MD_Twelve);
        QObject::connect(zoomIn, SIGNAL(pressed()), MD_Twelve, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), MD_Twelve, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MD_Twelve);
    } // setupUi

    void retranslateUi(QDialog *MD_Twelve)
    {
        MD_Twelve->setWindowTitle(QApplication::translate("MD_Twelve", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("MD_Twelve", "+ ", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("MD_Twelve", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MD_Twelve: public Ui_MD_Twelve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MD_TWELVE_H
