/********************************************************************************
** Form generated from reading UI file 'md_ten.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MD_TEN_H
#define UI_MD_TEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MD_Ten
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *MD_Ten)
    {
        if (MD_Ten->objectName().isEmpty())
            MD_Ten->setObjectName(QStringLiteral("MD_Ten"));
        MD_Ten->resize(700, 500);
        label = new QLabel(MD_Ten);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("MD10.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(MD_Ten);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(MD_Ten);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(MD_Ten);
        QObject::connect(zoomIn, SIGNAL(pressed()), MD_Ten, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), MD_Ten, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MD_Ten);
    } // setupUi

    void retranslateUi(QDialog *MD_Ten)
    {
        MD_Ten->setWindowTitle(QApplication::translate("MD_Ten", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("MD_Ten", "+ ", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("MD_Ten", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MD_Ten: public Ui_MD_Ten {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MD_TEN_H
