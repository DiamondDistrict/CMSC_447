#ifndef MD_EIGHT_H
#define MD_EIGHT_H

#include <QDialog>

namespace Ui {
class MD_Eight;
}

// Class for MD window
class MD_Eight : public QDialog
{
    Q_OBJECT

public:

    /***************************************************
     * Name: MD_Eight
     *      Standard Constructor
     * Precondition:
     *      Passes in a pointer object of QWidget.
     * Postconditions:
     *      Sets up the user interface.
     ***************************************************/
    explicit MD_Eight(QWidget *parent = 0);

    /***************************************************
     * Name: ~MD_Eight
     *      Destructor
     * Precondition:
     *      None.
     * Postconditions:
     *      Deletes user interface pointer.
     ***************************************************/
    ~MD_Eight();

private:

    // Declared pointer for user interface
    Ui::MD_Eight *ui;
};

#endif // MD_EIGHT_H
