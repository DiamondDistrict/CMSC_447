#include "nc_one.h"
#include "ui_nc_one.h"

NC_One::NC_One(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NC_One)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

NC_One::~NC_One()
{
    // Deletes the pointer
    delete ui;
}
