#include "supplier_record.h"
#include "ui_supplier_record.h"

supplier_record::supplier_record(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supplier_record)
{
    ui->setupUi(this);
}

supplier_record::~supplier_record()
{
    delete ui;
}
