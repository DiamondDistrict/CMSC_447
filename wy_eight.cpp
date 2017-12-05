#include "wy_eight.h"
#include "ui_wy_eight.h"

WY_Eight::WY_Eight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WY_Eight)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

WY_Eight::~WY_Eight()
{
    // Deletes the pointer
    delete ui;
}
