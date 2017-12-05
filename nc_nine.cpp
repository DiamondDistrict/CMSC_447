#include "nc_nine.h"
#include "ui_nc_nine.h"

NC_Nine::NC_Nine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NC_Nine)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

NC_Nine::~NC_Nine()
{
    // Deletes the pointer
    delete ui;
}
