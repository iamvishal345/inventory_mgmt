#include "addnew_customer.h"
#include "ui_addnew_customer.h"

addnew_customer::addnew_customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addnew_customer)
{
    ui->setupUi(this);
}

addnew_customer::~addnew_customer()
{
    delete ui;
}
