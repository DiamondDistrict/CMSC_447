#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_actionExit_triggered();

    void on_actionMD2_triggered();

    void on_actionMD4_triggered();

    void on_actionMD6_triggered();

    void on_actionMD8_triggered();

    void on_actionMD10_triggered();

    void on_actionMD12_triggered();

    void on_actionMD14_triggered();

    void on_actionMD16_triggered();

    void on_actionNC1_triggered();

    void on_actionNC3_triggered();

    void on_actionNC5_triggered();

    void on_actionNC7_triggered();

    void on_actionNC9_triggered();

    void on_actionNC11_triggered();

    void on_actionNC13_triggered();

    void on_actionNC15_triggered();

    void on_actionWY1_triggered();

    void on_actionWY2_triggered();

    void on_actionWY3_triggered();

    void on_actionWY4_triggered();

    void on_actionWY5_triggered();

    void on_actionWY6_triggered();

    void on_actionWY7_triggered();

    void on_actionWY8_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
