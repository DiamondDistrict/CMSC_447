/*******************************************************
 * File:       WY_Six.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Wyoming with
 * six districts.
 *
 *******************************************************/
#ifndef WY_SIX_H
#define WY_SIX_H

#include <QDialog>

namespace Ui {
class WY_Six;
}

class WY_Six : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: WY_Six
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit WY_Six(QWidget *parent = 0);

    /***************************************************
     * Name: ~WY_Six
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~WY_Six();

private:

    // Declared pointer for user interface
    Ui::WY_Six *ui;
};

#endif // WY_SIX_H
