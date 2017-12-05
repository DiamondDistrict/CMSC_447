#include "wy_four.h"
#include "ui_wy_four.h"

WY_Four::WY_Four(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WY_Four)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

WY_Four::~WY_Four()
{
    // Deletes the pointer
    delete ui;
}
