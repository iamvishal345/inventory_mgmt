#include "vehicle_record.h"
#include "ui_vehicle_record.h"

vehicle_record::vehicle_record(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vehicle_record)
{
    ui->setupUi(this);
}

vehicle_record::~vehicle_record()
{
    delete ui;
}
