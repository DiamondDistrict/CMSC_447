/*******************************************************
 * File:       MainWindow.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the main window.
 *
 * In addition to Maryland, we choose North Carolina
 * (heavily gerrymandered) and Wyoming (non gerrymandered)
 * states to prove that the algorithm is dynamic for any
 * state.We choose even districts for Maryland, odd
 * districts for North Carolina, and regular ordered
 * districts for Wyoming for simplicity of the project.
 *
 *******************************************************/
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

    /***************************************************
     * Name: MainWindow
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit MainWindow(QWidget *parent = 0);

    /***************************************************
     * Name: ~MainWindow
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~MainWindow();

private slots:

    /***************************************************
     * Name: on_actionExit_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, exits the program.
     ***************************************************/
    void on_actionExit_triggered();

    /***************************************************
     * MARYLAND CODE
     * *************************************************/

    /***************************************************
     * Name: on_actionMD2_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionMD2_triggered();

    /***************************************************
     * Name: on_actionMD4_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionMD4_triggered();

    /***************************************************
     * Name: on_actionMD6_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionMD6_triggered();

    /***************************************************
     * Name: on_actionMD8_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionMD8_triggered();

    /***************************************************
     * Name: on_actionMD10_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionMD10_triggered();

    /***************************************************
     * Name: on_actionMD12_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionMD12_triggered();

    /***************************************************
     * Name: on_actionMD14_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionMD14_triggered();

    /***************************************************
     * Name: on_actionMD16_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionMD16_triggered();

    /***************************************************
     * NORTH CAROLINA CODE
     * *************************************************/

    /***************************************************
     * Name: on_actionNC1_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionNC1_triggered();

    /***************************************************
     * Name: on_actionNC3_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionNC3_triggered();

    /***************************************************
     * Name: on_actionNC5_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionNC5_triggered();

    /***************************************************
     * Name: on_actionNC7_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionNC7_triggered();

    /***************************************************
     * Name: on_actionNC9_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionNC9_triggered();

    /***************************************************
     * Name: on_actionNC11_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionNC11_triggered();

    /***************************************************
     * Name: on_actionNC13_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionNC13_triggered();

    /***************************************************
     * Name: on_actionNC15_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionNC15_triggered();

    /***************************************************
     * WYOMING CODE
     * *************************************************/

    /***************************************************
     * Name: on_actionWY1_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionWY1_triggered();

    /***************************************************
     * Name: on_actionWY2_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionWY2_triggered();

    /***************************************************
     * Name: on_actionWY3_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionWY3_triggered();

    /***************************************************
     * Name: on_actionWY4_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionWY4_triggered();

    /***************************************************
     * Name: on_actionWY5_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionWY5_triggered();

    /***************************************************
     * Name: on_actionWY6_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionWY6_triggered();

    /***************************************************
     * Name: on_actionWY7_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionWY7_triggered();

    /***************************************************
     * Name: on_actionWY8_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionWY8_triggered();

private:

    // Declared pointer for user interface
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
