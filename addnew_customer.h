#ifndef ADDNEW_CUSTOMER_H
#define ADDNEW_CUSTOMER_H

#include <QDialog>

namespace Ui {
class addnew_customer;
}

class addnew_customer : public QDialog
{
    Q_OBJECT

public:
    explicit addnew_customer(QWidget *parent = 0);
    ~addnew_customer();

private:
    Ui::addnew_customer *ui;
};

#endif // ADDNEW_CUSTOMER_H
