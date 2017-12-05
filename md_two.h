/*******************************************************
 * File:       MD_Two.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Maryland with
 * two districts.
 *
 *******************************************************/
#ifndef MD_TWO_H
#define MD_TWO_H

#include <QDialog>

namespace Ui {
class MD_Two;
}

class MD_Two : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: MD_Two
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit MD_Two(QWidget *parent = 0);

    /***************************************************
     * Name: ~MD_Two
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~MD_Two();

private:

    // Declared pointer for user interface
    Ui::MD_Two *ui;
};

#endif // MD_TWO_H
