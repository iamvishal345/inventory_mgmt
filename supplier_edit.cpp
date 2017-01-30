#include "supplier_edit.h"
#include "ui_supplier_edit.h"

supplier_edit::supplier_edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supplier_edit)
{
    ui->setupUi(this);
}

supplier_edit::~supplier_edit()
{
    delete ui;
}
