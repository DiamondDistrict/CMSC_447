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
     * Name: on_actionMaryland_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionMaryland_triggered();

    /***************************************************
     * Name: on_actionNorth_Carolina_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionNorth_Carolina_triggered();

    /***************************************************
     * Name: on_actionWyoming_triggered()
     * Precondition:
     *      None.
     * Postconditions:
     *      When selected, it opens a new window.
     ***************************************************/
    void on_actionWyoming_triggered();

private:
    // declare pointer for user interface
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
