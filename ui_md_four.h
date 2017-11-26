/********************************************************************************
** Form generated from reading UI file 'md_four.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MD_FOUR_H
#define UI_MD_FOUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MD_Four
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *MD_Four)
    {
        if (MD_Four->objectName().isEmpty())
            MD_Four->setObjectName(QStringLiteral("MD_Four"));
        MD_Four->resize(700, 500);
        label = new QLabel(MD_Four);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("Maryland 2 Outline.gif")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(MD_Four);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(MD_Four);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(MD_Four);
        QObject::connect(zoomOut, SIGNAL(pressed()), MD_Four, SLOT(showNormal()));
        QObject::connect(zoomIn, SIGNAL(pressed()), MD_Four, SLOT(showMaximized()));

        QMetaObject::connectSlotsByName(MD_Four);
    } // setupUi

    void retranslateUi(QDialog *MD_Four)
    {
        MD_Four->setWindowTitle(QApplication::translate("MD_Four", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("MD_Four", "+ ", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("MD_Four", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MD_Four: public Ui_MD_Four {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MD_FOUR_H
