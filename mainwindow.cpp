#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "md_two.h"
#include "md_four.h"
#include "md_six.h"
#include "md_eight.h"
#include "md_ten.h"
#include "md_twelve.h"
#include "md_fourteen.h"
#include "md_sixteen.h"
#include "nc_one.h"
#include "nc_three.h"
#include "nc_five.h"
#include "nc_seven.h"
#include "nc_nine.h"
#include "nc_eleven.h"
#include "nc_thirteen.h"
#include "nc_fifteen.h"
#include "wy_one.h"
#include "wy_two.h"
#include "wy_three.h"
#include "wy_four.h"
#include "wy_five.h"
#include "wy_six.h"
#include "wy_seven.h"
#include "wy_eight.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Pointer that points to the setup for the user interface
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    // Deletes the pointer
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    // This exits the program
    QApplication::quit();
}

/***************************************************
 * MARYLAND CODE
 * *************************************************/

void MainWindow::on_actionMD2_triggered()
{
    // Create an object for the new class
    MD_Two obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionMD4_triggered()
{
    // Create an object for the new class
    MD_Four obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionMD6_triggered()
{
    // Create an object for the new class
    MD_Six obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionMD8_triggered()
{
    // Create an object for the new class
    MD_Eight obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionMD10_triggered()
{
    // Create an object for the new class
    MD_Ten obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionMD12_triggered()
{
    // Create an object for the new class
    MD_Twelve obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionMD14_triggered()
{
    // Create an object for the new class
    MD_Fourteen obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionMD16_triggered()
{
    // Create an object for the new class
    MD_Sixteen obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

/***************************************************
 * NORTH CAROLINA CODE
 * *************************************************/

void MainWindow::on_actionNC1_triggered()
{
    // Create an object for the new class
    NC_One obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionNC3_triggered()
{
    // Create an object for the new class
    NC_Three obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionNC5_triggered()
{
    // Create an object for the new class
    NC_Five obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionNC7_triggered()
{
    // Create an object for the new class
    NC_Seven obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionNC9_triggered()
{
    // Create an object for the new class
    NC_Nine obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionNC11_triggered()
{
    // Create an object for the new class
    NC_Eleven obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionNC13_triggered()
{
    // Create an object for the new class
    NC_Thirteen obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionNC15_triggered()
{
    // Create an object for the new class
    NC_Fifteen obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

/***************************************************
 * WYOMING CODE
 * *************************************************/

void MainWindow::on_actionWY1_triggered()
{
    // Create an object for the new class
    WY_One obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionWY2_triggered()
{
    // Create an object for the new class
    WY_Two obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionWY3_triggered()
{
    // Create an object for the new class
    WY_Three obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionWY4_triggered()
{
    // Create an object for the new class
    WY_Four obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionWY5_triggered()
{
    // Create an object for the new class
    WY_Five obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionWY6_triggered()
{
    // Create an object for the new class
    WY_Six obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionWY7_triggered()
{
    // Create an object for the new class
    WY_Seven obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}

void MainWindow::on_actionWY8_triggered()
{
    // Create an object for the new class
    WY_Eight obj;

    // The object sets the window up for a Dialog
    obj.setModal(true);

    // The object displays the new window
    obj.exec();
}
