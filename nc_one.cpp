#include "nc_one.h"
#include "ui_nc.h"

// set user interface by passing pointer
NC_One::NC_One(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NC_One)
{
    ui->setupUi(this);
}

// delete ui header
NC_One::~NC_One()
{
    delete ui;
}
