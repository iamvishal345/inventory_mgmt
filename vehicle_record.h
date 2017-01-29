#ifndef VEHICLE_RECORD_H
#define VEHICLE_RECORD_H

#include <QDialog>

namespace Ui {
class vehicle_record;
}

class vehicle_record : public QDialog
{
    Q_OBJECT

public:
    explicit vehicle_record(QWidget *parent = 0);
    ~vehicle_record();

private:
    Ui::vehicle_record *ui;
};

#endif // VEHICLE_RECORD_H
