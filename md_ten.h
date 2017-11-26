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
    explicit MD_Ten(QWidget *parent = 0);
    ~MD_Ten();

private:
    Ui::MD_Ten *ui;
};

#endif // MD_TEN_H
