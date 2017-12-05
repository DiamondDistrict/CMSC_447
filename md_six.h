/*******************************************************
 * File:       MD_Six.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Maryland with
 * six districts.
 *
 *******************************************************/
#ifndef MD_SIX_H
#define MD_SIX_H

#include <QDialog>

namespace Ui {
class MD_Six;
}

class MD_Six : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: MD_Six
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit MD_Six(QWidget *parent = 0);

    /***************************************************
     * Name: ~MD_Six
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~MD_Six();

private:

    // Declared pointer for user interface
    Ui::MD_Six *ui;
};

#endif // MD_SIX_H
