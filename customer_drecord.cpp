#include "customer_drecord.h"
#include "ui_customer_drecord.h"

customer_drecord::customer_drecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_drecord)
{
    ui->setupUi(this);
}

customer_drecord::~customer_drecord()
{
    delete ui;
}
