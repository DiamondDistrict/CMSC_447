#include "md_twelve.h"
#include "ui_md_twelve.h"

MD_Twelve::MD_Twelve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Twelve)
{
    ui->setupUi(this);
}

MD_Twelve::~MD_Twelve()
{
    delete ui;
}
