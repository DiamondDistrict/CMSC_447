/*******************************************************
 * File:       WY_Seven.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Wyoming with
 * seven districts.
 *
 *******************************************************/
#ifndef WY_SEVEN_H
#define WY_SEVEN_H

#include <QDialog>

namespace Ui {
class WY_Seven;
}

class WY_Seven : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: WY_Seven
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit WY_Seven(QWidget *parent = 0);

    /***************************************************
     * Name: ~WY_Seven
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~WY_Seven();

private:

    // Declared pointer for user interface
    Ui::WY_Seven *ui;
};

#endif // WY_SEVEN_H
