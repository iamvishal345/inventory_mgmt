#ifndef ADDNEWVEHICLE_H
#define ADDNEWVEHICLE_H

#include <QDialog>

namespace Ui {
class addnewvehicle;
}

class addnewvehicle : public QDialog
{
    Q_OBJECT

public:
    explicit addnewvehicle(QWidget *parent = 0);
    ~addnewvehicle();

private:
    Ui::addnewvehicle *ui;
};

#endif // ADDNEWVEHICLE_H
