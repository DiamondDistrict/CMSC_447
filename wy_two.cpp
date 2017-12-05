#include "wy_two.h"
#include "ui_wy_two.h"

WY_Two::WY_Two(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WY_Two)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

WY_Two::~WY_Two()
{
    // Deletes the pointer
    delete ui;
}
