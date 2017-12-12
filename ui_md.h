#ifndef UI_MD_8_H
#define UI_MD_8_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

// send pixmap for Maryland districts
// determined by spinbox value
QPixmap changeDistrictMD(int i)
{
    switch (i)
    {
    case 2:
        return QPixmap(QString::fromUtf8("MD2.png"));
        break;
    case 4:
        return QPixmap(QString::fromUtf8("MD4.png"));
        break;
    case 6:
        return QPixmap(QString::fromUtf8("MD6.png"));
        break;
    case 8:
        return QPixmap(QString::fromUtf8("MD8.png"));
        break;
    case 10:
        return QPixmap(QString::fromUtf8("MD10.png"));
        break;
    case 12:
        return QPixmap(QString::fromUtf8("MD12.png"));
        break;
    case 14:
        return QPixmap(QString::fromUtf8("MD14.png"));
        break;
    case 16:
        return QPixmap(QString::fromUtf8("MD16.png"));
    default:
        return QPixmap(QString::fromUtf8("Maryland 2 Outline.gif"));
        break;
    }
}

QT_BEGIN_NAMESPACE

class Ui_MD_Eight
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;
    QSpinBox *spinBox;

    void setupUi(QDialog *MD_Eight)
    {
        // Initialize MD Dialog Box
        if (MD_Eight->objectName().isEmpty())
            MD_Eight->setObjectName(QStringLiteral("Maryland"));
        MD_Eight->resize(700, 500);
        MD_Eight->setModal(false);

        // Initialize Label
        label = new QLabel(MD_Eight);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("MD2.png")));
        label->setScaledContents(true);

        // Initialize ZoomIn/ZoomOut Buttons
        zoomIn = new QPushButton(MD_Eight);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(370, 435, 125, 30));
        zoomOut = new QPushButton(MD_Eight);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(540, 435, 125, 30));

        // Initialize SpinBox
        spinBox = new QSpinBox(MD_Eight);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setRange(2, 16);
        spinBox->setSingleStep(2);
        spinBox->setGeometry(QRect(70, 430, 71, 31));

        retranslateUi(MD_Eight);

        // Connect Instructions to button signals
        QObject::connect(zoomIn, static_cast<void(QPushButton::*)()>(&QPushButton::pressed),
                         [=]() {label->resize(label->size() * 1.25); });
        QObject::connect(zoomOut, static_cast<void(QPushButton::*)()>(&QPushButton::pressed),
                         [=]() {label->resize(label->size() * 0.75); });
        QObject::connect(spinBox, static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            [=](int i){ label->setPixmap(changeDistrictMD(i)); });

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

#endif // UI_MD_8_H
