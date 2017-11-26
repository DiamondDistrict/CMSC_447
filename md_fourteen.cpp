#include "md_fourteen.h"
#include "ui_md_fourteen.h"

MD_Fourteen::MD_Fourteen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Fourteen)
{
    ui->setupUi(this);
}

MD_Fourteen::~MD_Fourteen()
{
    delete ui;
}
