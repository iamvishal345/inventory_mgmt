#include "supplier_payment.h"
#include "ui_supplier_payment.h"

supplier_payment::supplier_payment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supplier_payment)
{
    ui->setupUi(this);
}

supplier_payment::~supplier_payment()
{
    delete ui;
}
