#include "nc_eleven.h"
#include "ui_nc_eleven.h"

NC_Eleven::NC_Eleven(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NC_Eleven)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

NC_Eleven::~NC_Eleven()
{
    // Deletes the pointer
    delete ui;
}
