#ifndef MD_TWELVE_H
#define MD_TWELVE_H

#include <QDialog>

namespace Ui {
class MD_Twelve;
}

class MD_Twelve : public QDialog
{
    Q_OBJECT

public:
    explicit MD_Twelve(QWidget *parent = 0);
    ~MD_Twelve();

private:
    Ui::MD_Twelve *ui;
};

#endif // MD_TWELVE_H
