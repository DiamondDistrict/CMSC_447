/*******************************************************
 * File:       WY_Three.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Wyoming with
 * three districts.
 *
 *******************************************************/
#ifndef WY_THREE_H
#define WY_THREE_H

#include <QDialog>

namespace Ui {
class WY_Three;
}

class WY_Three : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: WY_Three
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit WY_Three(QWidget *parent = 0);

    /***************************************************
     * Name: ~WY_Three
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~WY_Three();

private:

    // Declared pointer for user interface
    Ui::WY_Three *ui;
};

#endif // WY_THREE_H
