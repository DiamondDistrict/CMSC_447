#include "md_ten.h"
#include "ui_md_ten.h"

MD_Ten::MD_Ten(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Ten)
{
    ui->setupUi(this);
}

MD_Ten::~MD_Ten()
{
    delete ui;
}
