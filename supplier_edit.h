#ifndef SUPPLIER_EDIT_H
#define SUPPLIER_EDIT_H

#include <QDialog>

namespace Ui {
class supplier_edit;
}

class supplier_edit : public QDialog
{
    Q_OBJECT

public:
    explicit supplier_edit(QWidget *parent = 0);
    ~supplier_edit();

private:
    Ui::supplier_edit *ui;
};

#endif // SUPPLIER_EDIT_H
