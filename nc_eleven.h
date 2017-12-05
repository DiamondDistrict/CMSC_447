/*******************************************************
 * File:       NC_Eleven.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for North Carolina
 * with eleven districts.
 *
 *******************************************************/
#ifndef NC_ELEVEN_H
#define NC_ELEVEN_H

#include <QDialog>

namespace Ui {
class NC_Eleven;
}

class NC_Eleven : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: NC_Eleven
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit NC_Eleven(QWidget *parent = 0);

    /***************************************************
     * Name: ~NC_Eleven
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~NC_Eleven();

private:

    // Declared pointer for user interface
    Ui::NC_Eleven *ui;
};

#endif // NC_ELEVEN_H
