#include "addnewvehicle.h"
#include "ui_addnewvehicle.h"

addnewvehicle::addnewvehicle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addnewvehicle)
{
    ui->setupUi(this);
}

addnewvehicle::~addnewvehicle()
{
    delete ui;
}
