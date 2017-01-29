#ifndef ADDNEW_SUPPLIER_H
#define ADDNEW_SUPPLIER_H

#include <QDialog>

namespace Ui {
class addnew_supplier;
}

class addnew_supplier : public QDialog
{
    Q_OBJECT

public:
    explicit addnew_supplier(QWidget *parent = 0);
    ~addnew_supplier();

private:
    Ui::addnew_supplier *ui;
};

#endif // ADDNEW_SUPPLIER_H
