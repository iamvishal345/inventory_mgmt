#ifndef VEHICLE_PAYMENT_H
#define VEHICLE_PAYMENT_H

#include <QDialog>

namespace Ui {
class vehicle_payment;
}

class vehicle_payment : public QDialog
{
    Q_OBJECT

public:
    explicit vehicle_payment(QWidget *parent = 0);
    ~vehicle_payment();

private:
    Ui::vehicle_payment *ui;
};

#endif // VEHICLE_PAYMENT_H
