#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QMenu>
#include <QAction>
#include "md_two.h"
#include "md_four.h"
#include "md_six.h"
#include "md_eight.h"
#include "md_ten.h"
#include "md_twelve.h"
#include "md_fourteen.h"
#include "md_sixteen.h"
#include "nc_one.h"
#include "wy_one.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered(){
    QApplication::quit();
}

void MainWindow::on_actionMD2_triggered()
{
    MD_Two obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionMD4_triggered()
{
    MD_Four obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionMD6_triggered()
{
    MD_Six obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionMD8_triggered()
{
    MD_Eight obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionMD10_triggered()
{
    MD_Ten obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionMD12_triggered()
{
    MD_Twelve obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionMD14_triggered()
{
    MD_Fourteen obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionMD16_triggered()
{
    MD_Sixteen obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionNC1_triggered()
{
    NC_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionNC3_triggered()
{
    NC_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionNC5_triggered()
{
    NC_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionNC7_triggered()
{
    NC_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionNC9_triggered()
{
    NC_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionNC11_triggered()
{
    NC_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionNC13_triggered()
{
    NC_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionNC15_triggered()
{
    NC_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionWY1_triggered()
{
    WY_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionWY2_triggered()
{
    WY_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionWY3_triggered()
{
    WY_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionWY4_triggered()
{
    WY_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionWY5_triggered()
{
    WY_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionWY6_triggered()
{
    WY_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionWY7_triggered()
{
    WY_One obj;
    obj.setModal(true);
    obj.exec();
}

void MainWindow::on_actionWY8_triggered()
{
    WY_One obj;
    obj.setModal(true);
    obj.exec();
}
