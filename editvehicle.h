#ifndef EDITVEHICLE_H
#define EDITVEHICLE_H

#include <QDialog>

namespace Ui {
class editvehicle;
}

class editvehicle : public QDialog
{
    Q_OBJECT

public:
    explicit editvehicle(QWidget *parent = 0);
    ~editvehicle();

private:
    Ui::editvehicle *ui;
};

#endif // EDITVEHICLE_H
