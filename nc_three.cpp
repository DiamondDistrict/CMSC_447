#include "nc_three.h"
#include "ui_nc_three.h"

NC_Three::NC_Three(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NC_Three)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

NC_Three::~NC_Three()
{
    // Deletes the pointer
    delete ui;
}
