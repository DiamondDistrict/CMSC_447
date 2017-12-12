#ifndef UI_WY_H
#define UI_WY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

// send pixmap for Wyoming districts
// determined by spinbox value
QPixmap changeDistrictWY(int i)
{
    switch (i)
    {
    case 1:
        return QPixmap(QString::fromUtf8("WY1.png"));
        break;
    case 2:
        return QPixmap(QString::fromUtf8("WY2.png"));
        break;
    case 3:
        return QPixmap(QString::fromUtf8("WY3.png"));
        break;
    case 4:
        return QPixmap(QString::fromUtf8("WY4.png"));
        break;
    case 5:
        return QPixmap(QString::fromUtf8("WY5.png"));
        break;
    case 6:
        return QPixmap(QString::fromUtf8("WY6.png"));
        break;
    case 7:
        return QPixmap(QString::fromUtf8("WY7.png"));
        break;
    case 8:
        return QPixmap(QString::fromUtf8("WY8.png"));
    default:
        return QPixmap(QString::fromUtf8("Wyoming Outline.gif"));
        break;
    }
}

QT_BEGIN_NAMESPACE

class Ui_WY
{
public:
    QLabel *label;
    QPushButton *zoomIn;
    QPushButton *zoomOut;
    QSpinBox *spinBox;

    void setupUi(QDialog *WY_One)
    {
        // Initialize WY Dialog Box
        if (WY_One->objectName().isEmpty())
            WY_One->setObjectName(QStringLiteral("Wyoming"));
        WY_One->resize(700, 500);
        WY_One->setModal(false);

        // Initialize Label
        label = new QLabel(WY_One);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 700, 400));
        label->setPixmap(QPixmap(QString::fromUtf8("WY1.png")));
        label->setScaledContents(true);

        // Initialize ZoomIn/ZoomOut
        zoomIn = new QPushButton(WY_One);
        zoomIn->setObjectName(QStringLiteral("zoomIn"));
        zoomIn->setGeometry(QRect(370, 435, 125, 30));
        zoomOut = new QPushButton(WY_One);
        zoomOut->setObjectName(QStringLiteral("zoomOut"));
        zoomOut->setGeometry(QRect(540, 435, 125, 30));

        // Initialize SpinBox
        spinBox = new QSpinBox(WY_One);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setRange(1, 8);
        spinBox->setSingleStep(1);
        spinBox->setGeometry(QRect(70, 430, 71, 31));

        retranslateUi(WY_One);

        // Connect Instructions to button signals
        QObject::connect(zoomIn, static_cast<void(QPushButton::*)()>(&QPushButton::pressed),
                         [=]() {label->resize(label->size() * 1.25); });
        QObject::connect(zoomOut, static_cast<void(QPushButton::*)()>(&QPushButton::pressed),
                         [=]() {label->resize(label->size() * 0.75); });
        QObject::connect(spinBox, static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            [=](int i){ label->setPixmap(changeDistrictWY(i)); });

        QMetaObject::connectSlotsByName(WY_One);
    } // setupUi

    void retranslateUi(QDialog *WY_One)
    {
        WY_One->setWindowTitle(QApplication::translate("WY_One", "Dialog", Q_NULLPTR));
        label->setText(QString());
        zoomIn->setText(QApplication::translate("WY_One", "+ ", Q_NULLPTR));
        zoomOut->setText(QApplication::translate("WY_One", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WY_One: public Ui_WY {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WY_H
