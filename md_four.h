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
    explicit MD_Four(QWidget *parent = 0);
    ~MD_Four();

private:
    Ui::MD_Four *ui;
};

#endif // MD_FOUR_H
