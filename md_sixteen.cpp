#include "md_sixteen.h"
#include "ui_md_sixteen.h"

MD_Sixteen::MD_Sixteen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Sixteen)
{
    ui->setupUi(this);
}

MD_Sixteen::~MD_Sixteen()
{
    delete ui;
}
