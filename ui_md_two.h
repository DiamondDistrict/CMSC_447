/********************************************************************************
** Form generated from reading UI file 'md_two.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MD_TWO_H
#define UI_MD_TWO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MD_Two
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *MD_Two)
    {
        if (MD_Two->objectName().isEmpty())
            MD_Two->setObjectName(QStringLiteral("MD_Two"));
        MD_Two->resize(700, 500);
        label = new QLabel(MD_Two);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("MD2.png")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(MD_Two);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(150, 435, 125, 30));
        zoomOut = new QPushButton(MD_Two);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(425, 435, 125, 30));

        retranslateUi(MD_Two);
        QObject::connect(zoomIn, SIGNAL(pressed()), MD_Two, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), MD_Two, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MD_Two);
    } // setupUi

    void retranslateUi(QDialog *MD_Two)
    {
        MD_Two->setWindowTitle(QApplication::translate("MD_Two", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("MD_Two", "+ ", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("MD_Two", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MD_Two: public Ui_MD_Two {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MD_TWO_H
