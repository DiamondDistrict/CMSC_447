#include "md_four.h"
#include "ui_md_four.h"

MD_Four::MD_Four(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Four)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

MD_Four::~MD_Four()
{
    // Deletes the pointer
    delete ui;
}
