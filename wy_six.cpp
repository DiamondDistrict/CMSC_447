#include "wy_six.h"
#include "ui_wy_six.h"

WY_Six::WY_Six(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WY_Six)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

WY_Six::~WY_Six()
{
    // Deletes the pointer
    delete ui;
}
