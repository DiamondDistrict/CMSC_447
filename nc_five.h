/*******************************************************
 * File:       NC_Five.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for North Carolina
 * with five districts.
 *
 *******************************************************/
#ifndef NC_FIVE_H
#define NC_FIVE_H

#include <QDialog>

namespace Ui {
class NC_Five;
}

class NC_Five : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: NC_Five
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit NC_Five(QWidget *parent = 0);

    /***************************************************
     * Name: ~NC_Five
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~NC_Five();

private:

    // Declared pointer for user interface
    Ui::NC_Five *ui;
};

#endif // NC_FIVE_H
