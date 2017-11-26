#include "md_eight.h"
#include "ui_md_eight.h"

MD_Eight::MD_Eight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Eight)
{
    ui->setupUi(this);
}

MD_Eight::~MD_Eight()
{
    delete ui;
}
