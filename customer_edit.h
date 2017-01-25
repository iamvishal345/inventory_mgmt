#ifndef CUSTOMER_EDIT_H
#define CUSTOMER_EDIT_H

#include <QDialog>

namespace Ui {
class customer_edit;
}

class customer_edit : public QDialog
{
    Q_OBJECT

public:
    explicit customer_edit(QWidget *parent = 0);
    ~customer_edit();

private:
    Ui::customer_edit *ui;
};

#endif // CUSTOMER_EDIT_H
