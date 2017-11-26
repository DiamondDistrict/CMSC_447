#ifndef MD_SIX_H
#define MD_SIX_H

#include <QDialog>

namespace Ui {
class MD_Six;
}

class MD_Six : public QDialog
{
    Q_OBJECT

public:
    explicit MD_Six(QWidget *parent = 0);
    ~MD_Six();

private:
    Ui::MD_Six *ui;
};

#endif // MD_SIX_H
