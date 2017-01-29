#include "addnew_supplier.h"
#include "ui_addnew_supplier.h"

addnew_supplier::addnew_supplier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addnew_supplier)
{
    ui->setupUi(this);
}

addnew_supplier::~addnew_supplier()
{
    delete ui;
}
