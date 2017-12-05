/********************************************************************************
** Form generated from reading UI file 'md_six.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MD_SIX_H
#define UI_MD_SIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MD_Six
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *MD_Six)
    {
        if (MD_Six->objectName().isEmpty())
            MD_Six->setObjectName(QStringLiteral("MD_Six"));
        MD_Six->resize(700, 500);
        label = new QLabel(MD_Six);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("MD6.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(MD_Six);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(MD_Six);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(MD_Six);
        QObject::connect(zoomIn, SIGNAL(pressed()), MD_Six, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), MD_Six, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MD_Six);
    } // setupUi

    void retranslateUi(QDialog *MD_Six)
    {
        MD_Six->setWindowTitle(QApplication::translate("MD_Six", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("MD_Six", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("MD_Six", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MD_Six: public Ui_MD_Six {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MD_SIX_H
