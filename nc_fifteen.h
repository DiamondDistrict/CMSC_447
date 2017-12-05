/*******************************************************
 * File:       NC_Fifteen.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for North Carolina
 * with fifteen districts.
 *
 *******************************************************/
#ifndef NC_FIFTEEN_H
#define NC_FIFTEEN_H

#include <QDialog>

namespace Ui {
class NC_Fifteen;
}

class NC_Fifteen : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: NC_Fifteen
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit NC_Fifteen(QWidget *parent = 0);

    /***************************************************
     * Name: ~NC_Fifteen
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~NC_Fifteen();

private:

    // Declared pointer for user interface
    Ui::NC_Fifteen *ui;
};

#endif // NC_FIFTEEN_H
