/*******************************************************
 * File:       MD_Fourteen.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Maryland with
 * fourteen districts.
 *
 *******************************************************/
#ifndef MD_FOURTEEN_H
#define MD_FOURTEEN_H

#include <QDialog>

namespace Ui {
class MD_Fourteen;
}

class MD_Fourteen : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: MD_Fourteen
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit MD_Fourteen(QWidget *parent = 0);

    /***************************************************
     * Name: ~MD_Fourteen
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~MD_Fourteen();

private:

    // Declared pointer for user interface
    Ui::MD_Fourteen *ui;
};

#endif // MD_FOURTEEN_H
