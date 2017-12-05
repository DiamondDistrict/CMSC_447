#include "md_twelve.h"
#include "ui_md_twelve.h"

MD_Twelve::MD_Twelve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Twelve)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

MD_Twelve::~MD_Twelve()
{
    // Deletes the pointer
    delete ui;
}
