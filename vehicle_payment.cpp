#include "vehicle_payment.h"
#include "ui_vehicle_payment.h"

vehicle_payment::vehicle_payment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vehicle_payment)
{
    ui->setupUi(this);
}

vehicle_payment::~vehicle_payment()
{
    delete ui;
}
