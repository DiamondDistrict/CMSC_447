#include "md_two.h"
#include "ui_md_two.h"

MD_Two::MD_Two(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Two)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

MD_Two::~MD_Two()
{
    // Deletes the pointer
    delete ui;
}
