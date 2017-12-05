/*******************************************************
 * File:       NC_One.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for North Carolina
 * with one districts.
 *
 *******************************************************/
#ifndef NC_ONE_H
#define NC_ONE_H

#include <QDialog>

namespace Ui {
class NC_One;
}

class NC_One : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: NC_One
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit NC_One(QWidget *parent = 0);

    /***************************************************
     * Name: ~NC_One
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~NC_One();

private:

    // Declared pointer for user interface
    Ui::NC_One *ui;
};

#endif // NC_ONE_H
