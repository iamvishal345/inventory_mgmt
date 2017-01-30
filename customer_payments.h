#ifndef CUSTOMER_PAYMENTS_H
#define CUSTOMER_PAYMENTS_H

#include <QDialog>

namespace Ui {
class customer_payments;
}

class customer_payments : public QDialog
{
    Q_OBJECT

public:
    explicit customer_payments(QWidget *parent = 0);
    ~customer_payments();

private:
    Ui::customer_payments *ui;
};

#endif // CUSTOMER_PAYMENTS_H
