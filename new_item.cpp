#include "new_item.h"
#include "ui_new_item.h"

New_Item::New_Item(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::New_Item)
{
    ui->setupUi(this);
}

New_Item::~New_Item()
{
    delete ui;
}
