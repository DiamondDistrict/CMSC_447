/*******************************************************
 * File:       MD_Ten.h
 * Product:    Un-Gerrymandered Software
 * Written By: Diamond Districting
 * Date:       12/2/2017
 * Course:     CMSC 447
 * Email:      diamonddistricting@gmail.com
 *
 * This class displays the sub window for Maryland with
 * ten districts.
 *
 *******************************************************/
#ifndef MD_TEN_H
#define MD_TEN_H

#include <QDialog>

namespace Ui {
class MD_Ten;
}

class MD_Ten : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: MD_Ten
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit MD_Ten(QWidget *parent = 0);

    /***************************************************
     * Name: ~MD_Ten
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~MD_Ten();

private:

    // Declared pointer for user interface
    Ui::MD_Ten *ui;
};

#endif // MD_TEN_H
