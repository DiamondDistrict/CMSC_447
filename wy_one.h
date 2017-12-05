/*******************************************************
 * File:       WY_One.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Wyoming with
 * one districts.
 *
 *******************************************************/
#ifndef WY_ONE_H
#define WY_ONE_H

#include <QDialog>

namespace Ui {
class WY_One;
}

class WY_One : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: WY_One
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit WY_One(QWidget *parent = 0);

    /***************************************************
     * Name: ~WY_One
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~WY_One();

private:

    // Declared pointer for user interface
    Ui::WY_One *ui;
};

#endif // WY_ONE_H
