#include "md_eight.h"
#include "ui_md.h"

// set user interface by passing pointer
MD_Eight::MD_Eight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MD_Eight)
{
    ui->setupUi(this);
}

// delete ui pointer
MD_Eight::~MD_Eight()
{
    delete ui;
}
