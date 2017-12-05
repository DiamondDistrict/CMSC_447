#include "nc_fifteen.h"
#include "ui_nc_fifteen.h"

NC_Fifteen::NC_Fifteen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NC_Fifteen)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

NC_Fifteen::~NC_Fifteen()
{
    // Deletes the pointer
    delete ui;
}
