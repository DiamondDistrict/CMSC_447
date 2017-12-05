#include "md_sixteen.h"
#include "ui_md_sixteen.h"

MD_Sixteen::MD_Sixteen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Sixteen)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

MD_Sixteen::~MD_Sixteen()
{
    // Deletes the pointer
    delete ui;
}
