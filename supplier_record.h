#ifndef SUPPLIER_RECORD_H
#define SUPPLIER_RECORD_H

#include <QDialog>

namespace Ui {
class supplier_record;
}

class supplier_record : public QDialog
{
    Q_OBJECT

public:
    explicit supplier_record(QWidget *parent = 0);
    ~supplier_record();

private:
    Ui::supplier_record *ui;
};

#endif // SUPPLIER_RECORD_H
