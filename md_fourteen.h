#ifndef MD_FOURTEEN_H
#define MD_FOURTEEN_H

#include <QDialog>

namespace Ui {
class MD_Fourteen;
}

class MD_Fourteen : public QDialog
{
    Q_OBJECT

public:
    explicit MD_Fourteen(QWidget *parent = 0);
    ~MD_Fourteen();

private:
    Ui::MD_Fourteen *ui;
};

#endif // MD_FOURTEEN_H
