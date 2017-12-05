#include "wy_five.h"
#include "ui_wy_five.h"

WY_Five::WY_Five(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WY_Five)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

WY_Five::~WY_Five()
{
    // Deletes the pointer
    delete ui;
}
