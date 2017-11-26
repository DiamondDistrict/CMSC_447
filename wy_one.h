#ifndef WY_ONE_H
#define WY_ONE_H

#include <QDialog>

namespace Ui {
class WY_One;
}

class WY_One : public QDialog
{
    Q_OBJECT

public:
    explicit WY_One(QWidget *parent = 0);
    ~WY_One();

private:
    Ui::WY_One *ui;
};

#endif // WY_ONE_H
