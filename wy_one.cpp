#include "wy_one.h"
#include "ui_wy_one.h"

WY_One::WY_One(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WY_One)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

WY_One::~WY_One()
{
    // Deletes the pointer
    delete ui;
}
