#include "md_six.h"
#include "ui_md_six.h"

MD_Six::MD_Six(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Six)
{
    ui->setupUi(this);
}

MD_Six::~MD_Six()
{
    delete ui;
}
