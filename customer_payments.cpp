#include "customer_payments.h"
#include "ui_customer_payments.h"

customer_payments::customer_payments(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_payments)
{
    ui->setupUi(this);
}

customer_payments::~customer_payments()
{
    delete ui;
}
