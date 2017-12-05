/*******************************************************
 * File:       NC_Three.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for North Carolina
 * with three districts.
 *
 *******************************************************/
#ifndef NC_THREE_H
#define NC_THREE_H

#include <QDialog>

namespace Ui {
class NC_Three;
}

class NC_Three : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: NC_Three
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit NC_Three(QWidget *parent = 0);

    /***************************************************
     * Name: ~NC_Three
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~NC_Three();

private:

    // Declared pointer for user interface
    Ui::NC_Three *ui;
};

#endif // NC_THREE_H
