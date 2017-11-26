#ifndef MD_EIGHT_H
#define MD_EIGHT_H

#include <QDialog>

namespace Ui {
class MD_Eight;
}

class MD_Eight : public QDialog
{
    Q_OBJECT

public:
    explicit MD_Eight(QWidget *parent = 0);
    ~MD_Eight();

private:
    Ui::MD_Eight *ui;
};

#endif // MD_EIGHT_H
