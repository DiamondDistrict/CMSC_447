#include "wy_one.h"
#include "ui_wy.h"

// set user interface by passing pointer
WY_One::WY_One(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WY_One)
{
    ui->setupUi(this);
}

// delete ui header
WY_One::~WY_One()
{
    delete ui;
}
