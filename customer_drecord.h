#ifndef CUSTOMER_DRECORD_H
#define CUSTOMER_DRECORD_H

#include <QDialog>

namespace Ui {
class customer_drecord;
}

class customer_drecord : public QDialog
{
    Q_OBJECT

public:
    explicit customer_drecord(QWidget *parent = 0);
    ~customer_drecord();

private:
    Ui::customer_drecord *ui;
};

#endif // CUSTOMER_DRECORD_H
