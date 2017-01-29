#ifndef STOCK_RECORD_H
#define STOCK_RECORD_H

#include <QDialog>

namespace Ui {
class stock_record;
}

class stock_record : public QDialog
{
    Q_OBJECT

public:
    explicit stock_record(QWidget *parent = 0);
    ~stock_record();

private:
    Ui::stock_record *ui;
};

#endif // STOCK_RECORD_H
