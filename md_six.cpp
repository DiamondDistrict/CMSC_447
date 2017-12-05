#include "md_six.h"
#include "ui_md_six.h"

MD_Six::MD_Six(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Six)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

MD_Six::~MD_Six()
{
    // Deletes the pointer
    delete ui;
}
