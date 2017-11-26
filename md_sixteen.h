#ifndef MD_SIXTEEN_H
#define MD_SIXTEEN_H

#include <QDialog>

namespace Ui {
class MD_Sixteen;
}

class MD_Sixteen : public QDialog
{
    Q_OBJECT

public:
    explicit MD_Sixteen(QWidget *parent = 0);
    ~MD_Sixteen();

private:
    Ui::MD_Sixteen *ui;
};

#endif // MD_SIXTEEN_H
