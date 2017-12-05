/*******************************************************
 * File:       WY_Five.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Wyoming with
 * five districts.
 *
 *******************************************************/
#ifndef WY_FIVE_H
#define WY_FIVE_H

#include <QDialog>

namespace Ui {
class WY_Five;
}

class WY_Five : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: WY_Five
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit WY_Five(QWidget *parent = 0);

    /***************************************************
     * Name: ~WY_Five
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~WY_Five();

private:

    // Declared pointer for user interface
    Ui::WY_Five *ui;
};

#endif // WY_FIVE_H
