#include "editvehicle.h"
#include "ui_editvehicle.h"

editvehicle::editvehicle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editvehicle)
{
    ui->setupUi(this);
}

editvehicle::~editvehicle()
{
    delete ui;
}
