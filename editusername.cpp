#include "editusername.h"
#include "ui_editusername.h"

editusername::editusername(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editusername)
{
    ui->setupUi(this);
}

editusername::~editusername()
{
    delete ui;
}

void editusername::on_buttonBox_accepted()
{

}
