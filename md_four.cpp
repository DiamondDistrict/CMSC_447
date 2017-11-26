#include "md_four.h"
#include "ui_md_four.h"

MD_Four::MD_Four(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Four)
{
    ui->setupUi(this);
}

MD_Four::~MD_Four()
{
    delete ui;
}
