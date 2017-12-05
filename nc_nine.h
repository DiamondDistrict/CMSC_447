/*******************************************************
 * File:       NC_Nine.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for North Carolina
 * with nice districts.
 *
 *******************************************************/
#ifndef NC_NINE_H
#define NC_NINE_H

#include <QDialog>

namespace Ui {
class NC_Nine;
}

class NC_Nine : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: NC_Nine
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit NC_Nine(QWidget *parent = 0);

    /***************************************************
     * Name: ~NC_Nine
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~NC_Nine();

private:

    // Declared pointer for user interface
    Ui::NC_Nine *ui;
};

#endif // NC_NINE_H
