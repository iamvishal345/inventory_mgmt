#include "edit_supplier.h"
#include "ui_edit_supplier.h"

edit_supplier::edit_supplier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_supplier)
{
    ui->setupUi(this);
}

edit_supplier::~edit_supplier()
{
    delete ui;
}
