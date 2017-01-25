#include "customer_edit.h"
#include "ui_customer_edit.h"

customer_edit::customer_edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_edit)
{
    ui->setupUi(this);
}

customer_edit::~customer_edit()
{
    delete ui;
}
