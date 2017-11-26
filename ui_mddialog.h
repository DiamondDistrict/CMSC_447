/********************************************************************************
** Form generated from reading UI file 'mddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDDIALOG_H
#define UI_MDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MDDialog
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;

    void setupUi(QDialog *MDDialog)
    {
        if (MDDialog->objectName().isEmpty())
            MDDialog->setObjectName(QStringLiteral("MDDialog"));
        MDDialog->resize(617, 478);
        label = new QLabel(MDDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 581, 391));
        label->setPixmap(QPixmap(QString::fromUtf8("Maryland 2 Outline.gif")));
        label->setScaledContents(true);
        zoomIn = new QPushButton(MDDialog);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(230, 420, 93, 28));
        zoomOut = new QPushButton(MDDialog);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(400, 420, 93, 28));

        retranslateUi(MDDialog);
        QObject::connect(zoomIn, SIGNAL(pressed()), MDDialog, SLOT(showMaximized()));
        QObject::connect(zoomOut, SIGNAL(pressed()), MDDialog, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MDDialog);
    } // setupUi

    void retranslateUi(QDialog *MDDialog)
    {
        MDDialog->setWindowTitle(QApplication::translate("MDDialog", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("MDDialog", "+", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("MDDialog", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MDDialog: public Ui_MDDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDDIALOG_H
