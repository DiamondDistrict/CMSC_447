/********************************************************************************
** Form generated from reading UI file 'md_eight.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MD_EIGHT_H
#define UI_MD_EIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MD_Eight
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *MD_Eight)
    {
        if (MD_Eight->objectName().isEmpty())
            MD_Eight->setObjectName(QStringLiteral("MD_Eight"));
        MD_Eight->resize(700, 500);
        label = new QLabel(MD_Eight);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("MD8.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(MD_Eight);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(MD_Eight);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(MD_Eight);
        QObject::connect(zoomIn, SIGNAL(pressed()), MD_Eight, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), MD_Eight, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MD_Eight);
    } // setupUi

    void retranslateUi(QDialog *MD_Eight)
    {
        MD_Eight->setWindowTitle(QApplication::translate("MD_Eight", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("MD_Eight", "+ ", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("MD_Eight", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MD_Eight: public Ui_MD_Eight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MD_EIGHT_H
