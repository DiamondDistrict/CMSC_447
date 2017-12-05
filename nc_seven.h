/*******************************************************
 * File:       NC_Seven.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for North Carolina
 * with seven districts.
 *
 *******************************************************/
#ifndef NC_SEVEN_H
#define NC_SEVEN_H

#include <QDialog>

namespace Ui {
class NC_Seven;
}

class NC_Seven : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: NC_Seven
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit NC_Seven(QWidget *parent = 0);

    /***************************************************
     * Name: ~NC_Seven
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~NC_Seven();

private:

    // Declared pointer for user interface
    Ui::NC_Seven *ui;
};

#endif // NC_SEVEN_H
