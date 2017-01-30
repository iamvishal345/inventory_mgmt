#ifndef SUPPLIER_PAYMENT_H
#define SUPPLIER_PAYMENT_H

#include <QDialog>

namespace Ui {
class supplier_payment;
}

class supplier_payment : public QDialog
{
    Q_OBJECT

public:
    explicit supplier_payment(QWidget *parent = 0);
    ~supplier_payment();

private:
    Ui::supplier_payment *ui;
};

#endif // SUPPLIER_PAYMENT_H
