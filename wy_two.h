/*******************************************************
 * File:       WY_Two.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Wyoming with
 * two districts.
 *
 *******************************************************/
#ifndef WY_TWO_H
#define WY_TWO_H

#include <QDialog>

namespace Ui {
class WY_Two;
}

class WY_Two : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: WY_Two
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit WY_Two(QWidget *parent = 0);

    /***************************************************
     * Name: ~WY_Two
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~WY_Two();

private:

    // Declared pointer for user interface
    Ui::WY_Two *ui;
};

#endif // WY_TWO_H
