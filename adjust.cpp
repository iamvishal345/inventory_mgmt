#include "adjust.h"
#include "ui_adjust.h"

adjust::adjust(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adjust)
{
    ui->setupUi(this);
}

adjust::~adjust()
{
    delete ui;
}
