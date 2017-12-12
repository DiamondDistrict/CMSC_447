#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QMenu>
#include <QAction>
#include "md_eight.h"
#include "nc_one.h"
#include "wy_one.h"

// Set UI for Main Window
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

// delete ui pointer
MainWindow::~MainWindow()
{
    delete ui;
}

// exit progam
void MainWindow::on_actionExit_triggered(){
    QApplication::quit();
}

// Open Maryland window
void MainWindow::on_actionMaryland_triggered()
{
    MD_Eight obj;
    obj.setModal(true);
    obj.exec();
}

// Open North Carolina window
void MainWindow::on_actionNorth_Carolina_triggered()
{
    NC_One obj;
    obj.setModal(true);
    obj.exec();
}

// Open Wyoming window
void MainWindow::on_actionWyoming_triggered()
{
    WY_One obj;
    obj.setModal(true);
    obj.exec();
}
