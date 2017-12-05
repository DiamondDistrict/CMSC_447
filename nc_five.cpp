#include "nc_five.h"
#include "ui_nc_five.h"

NC_Five::NC_Five(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NC_Five)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

NC_Five::~NC_Five()
{
    // Deletes the pointer
    delete ui;
}
