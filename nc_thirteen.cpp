#include "nc_thirteen.h"
#include "ui_nc_thirteen.h"

NC_Thirteen::NC_Thirteen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NC_Thirteen)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

NC_Thirteen::~NC_Thirteen()
{
    // Deletes the pointer
    delete ui;
}
