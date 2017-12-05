/*******************************************************
 * File:       MD_Twelve.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Maryland with
 * twelve districts.
 *
 *******************************************************/
#ifndef MD_TWELVE_H
#define MD_TWELVE_H

#include <QDialog>

namespace Ui {
class MD_Twelve;
}

class MD_Twelve : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: MD_Twelve
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit MD_Twelve(QWidget *parent = 0);

    /***************************************************
     * Name: ~MD_Twelve
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~MD_Twelve();

private:

    // Declared pointer for user interface
    Ui::MD_Twelve *ui;
};

#endif // MD_TWELVE_H
