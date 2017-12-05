/*******************************************************
 * File:       MD_Four.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Maryland with
 * four districts.
 *
 *******************************************************/
#ifndef MD_FOUR_H
#define MD_FOUR_H

#include <QDialog>

namespace Ui {
class MD_Four;
}

class MD_Four : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: MD_Four
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit MD_Four(QWidget *parent = 0);

    /***************************************************
     * Name: ~MD_Four
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~MD_Four();

private:

    // Declared pointer for user interface
    Ui::MD_Four *ui;
};

#endif // MD_FOUR_H
