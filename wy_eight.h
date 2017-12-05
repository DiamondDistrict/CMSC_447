/*******************************************************
 * File:       WY_Eight.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Wyoming with
 * eight districts.
 *
 *******************************************************/
#ifndef WY_EIGHT_H
#define WY_EIGHT_H

#include <QDialog>

namespace Ui {
class WY_Eight;
}

class WY_Eight : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: WY_Eight
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit WY_Eight(QWidget *parent = 0);

    /***************************************************
     * Name: ~WY_Eight
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~WY_Eight();

private:

    // Declared pointer for user interface
    Ui::WY_Eight *ui;
};

#endif // WY_EIGHT_H
