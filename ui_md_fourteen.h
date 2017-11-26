/********************************************************************************
** Form generated from reading UI file 'md_fourteen.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MD_FOURTEEN_H
#define UI_MD_FOURTEEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MD_Fourteen
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *MD_Fourteen)
    {
        if (MD_Fourteen->objectName().isEmpty())
            MD_Fourteen->setObjectName(QStringLiteral("MD_Fourteen"));
        MD_Fourteen->resize(700, 500);
        label = new QLabel(MD_Fourteen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("Maryland 2 Outline.gif")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(MD_Fourteen);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(MD_Fourteen);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(MD_Fourteen);
        QObject::connect(zoomIn, SIGNAL(pressed()), MD_Fourteen, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), MD_Fourteen, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MD_Fourteen);
    } // setupUi

    void retranslateUi(QDialog *MD_Fourteen)
    {
        MD_Fourteen->setWindowTitle(QApplication::translate("MD_Fourteen", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("MD_Fourteen", "+ ", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("MD_Fourteen", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MD_Fourteen: public Ui_MD_Fourteen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MD_FOURTEEN_H
