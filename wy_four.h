/*******************************************************
 * File:       WY_Four.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Wyoming with
 * four districts.
 *
 *******************************************************/
#ifndef WY_FOUR_H
#define WY_FOUR_H

#include <QDialog>

namespace Ui {
class WY_Four;
}

class WY_Four : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: WY_Four
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit WY_Four(QWidget *parent = 0);

    /***************************************************
     * Name: ~WY_Four
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~WY_Four();

private:

    // Declared pointer for user interface
    Ui::WY_Four *ui;
};

#endif // WY_FOUR_H
