#include "wy_three.h"
#include "ui_wy_three.h"

WY_Three::WY_Three(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WY_Three)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

WY_Three::~WY_Three()
{
    // Deletes the pointer
    delete ui;
}
