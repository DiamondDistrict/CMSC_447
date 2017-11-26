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
    explicit MD_Two(QWidget *parent = 0);
    ~MD_Two();

private:
    Ui::MD_Two *ui;
};

#endif // MD_TWO_H
