#ifndef NC_ONE_H
#define NC_ONE_H

#include <QDialog>

namespace Ui {
class NC_One;
}

class NC_One : public QDialog
{
    Q_OBJECT

public:
    explicit NC_One(QWidget *parent = 0);
    ~NC_One();

private:
    Ui::NC_One *ui;
};

#endif // NC_ONE_H
