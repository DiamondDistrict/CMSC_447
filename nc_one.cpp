#include "nc_one.h"
#include "ui_nc_one.h"

NC_One::NC_One(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NC_One)
{
    ui->setupUi(this);
}

NC_One::~NC_One()
{
    delete ui;
}
