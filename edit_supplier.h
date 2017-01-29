#ifndef EDIT_SUPPLIER_H
#define EDIT_SUPPLIER_H

#include <QDialog>

namespace Ui {
class edit_supplier;
}

class edit_supplier : public QDialog
{
    Q_OBJECT

public:
    explicit edit_supplier(QWidget *parent = 0);
    ~edit_supplier();

private:
    Ui::edit_supplier *ui;
};

#endif // EDIT_SUPPLIER_H
