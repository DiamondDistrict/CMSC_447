#include "nc_seven.h"
#include "ui_nc_seven.h"

NC_Seven::NC_Seven(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NC_Seven)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

NC_Seven::~NC_Seven()
{
    // Deletes the pointer
    delete ui;
}
