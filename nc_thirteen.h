/*******************************************************
 * File:       NC_Thirteen.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for North Carolina
 * with thirteen districts.
 *
 *******************************************************/
#ifndef NC_THIRTEEN_H
#define NC_THIRTEEN_H

#include <QDialog>

namespace Ui {
class NC_Thirteen;
}

class NC_Thirteen : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: NC_Thirteen
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit NC_Thirteen(QWidget *parent = 0);

    /***************************************************
     * Name: ~NC_Thirteen
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~NC_Thirteen();

private:

    // Declared pointer for user interface
    Ui::NC_Thirteen *ui;
};

#endif // NC_THIRTEEN_H
