#include "wy_seven.h"
#include "ui_wy_seven.h"

WY_Seven::WY_Seven(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WY_Seven)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

WY_Seven::~WY_Seven()
{
    // Deletes the pointer
    delete ui;
}
