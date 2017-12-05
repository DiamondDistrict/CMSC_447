#include "md_fourteen.h"
#include "ui_md_fourteen.h"

MD_Fourteen::MD_Fourteen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Fourteen)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

MD_Fourteen::~MD_Fourteen()
{
    // Deletes the pointer
    delete ui;
}
