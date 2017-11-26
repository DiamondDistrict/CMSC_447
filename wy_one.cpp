#include "wy_one.h"
#include "ui_wy_one.h"

WY_One::WY_One(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WY_One)
{
    ui->setupUi(this);
}

WY_One::~WY_One()
{
    delete ui;
}
