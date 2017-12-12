#ifndef UI_NC_H
#define UI_NC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

// send pixmap for North Carolina districts
// determined by spinbox value
QPixmap changeDistrictNC(int i)
{
    switch (i)
    {
    case 3:
        return QPixmap(QString::fromUtf8("nc03.png"));
        break;
    case 5:
        return QPixmap(QString::fromUtf8("nc05.png"));
        break;
    case 7:
        return QPixmap(QString::fromUtf8("nc07.png"));
        break;
    case 9:
        return QPixmap(QString::fromUtf8("nc09.png"));
        break;
    case 11:
        return QPixmap(QString::fromUtf8("nc11.png"));
        break;
    case 13:
        return QPixmap(QString::fromUtf8("nc13.png"));
        break;
    case 15:
        return QPixmap(QString::fromUtf8("nc15.png"));
    default:
        return QPixmap(QString::fromUtf8("North Carolina Outline.gif"));
        break;
    }
}

QT_BEGIN_NAMESPACE

class Ui_NC
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;
    QSpinBox *spinBox;

    void setupUi(QDialog *NC_One)
    {
        // Initialize NC Dialog Box
        if (NC_One->objectName().isEmpty())
            NC_One->setObjectName(QStringLiteral("North Carolina"));
        NC_One->resize(700, 500);
        NC_One->setModal(false);

        // Initalize label
        label = new QLabel(NC_One);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("nc03.png")));
        label->setScaledContents(true);

        // Initialize ZoomIn/ZoomOut Buttons
        zoomIn = new QPushButton(NC_One);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(370, 435, 125, 30));
        zoomOut = new QPushButton(NC_One);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(540, 435, 125, 30));

        // Initalize SpinBox
        spinBox = new QSpinBox(NC_One);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setRange(3, 15);
        spinBox->setSingleStep(2);
        spinBox->setGeometry(QRect(70, 430, 71, 31));

        retranslateUi(NC_One);

        // Connect Instructions to button signals
        QObject::connect(zoomIn, static_cast<void(QPushButton::*)()>(&QPushButton::pressed),
                         [=]() {label->resize(label->size() * 1.25); });
        QObject::connect(zoomOut, static_cast<void(QPushButton::*)()>(&QPushButton::pressed),
                         [=]() {label->resize(label->size() * 0.75); });
        QObject::connect(spinBox, static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            [=](int i){ label->setPixmap(changeDistrictNC(i)); });

        QMetaObject::connectSlotsByName(NC_One);
    } // setupUi

    void retranslateUi(QDialog *NC_One)
    {
        NC_One->setWindowTitle(QApplication::translate("NC_One", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("NC_One", "+ ", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("NC_One", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NC_One: public Ui_NC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NC_H
