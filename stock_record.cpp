#include "stock_record.h"
#include "ui_stock_record.h"

stock_record::stock_record(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stock_record)
{
    ui->setupUi(this);
}

stock_record::~stock_record()
{
    delete ui;
}
