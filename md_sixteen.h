/*******************************************************
 * File:       MD_Sixteen.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Maryland with
 * sixteen districts.
 *
 *******************************************************/
#ifndef MD_SIXTEEN_H
#define MD_SIXTEEN_H

#include <QDialog>

namespace Ui {
class MD_Sixteen;
}

class MD_Sixteen : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: MD_Sixteen
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit MD_Sixteen(QWidget *parent = 0);

    /***************************************************
     * Name: ~MD_Sixteen
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~MD_Sixteen();

private:

    // Declared pointer for user interface
    Ui::MD_Sixteen *ui;
};

#endif // MD_SIXTEEN_H
