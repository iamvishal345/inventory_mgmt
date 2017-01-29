#ifndef ADJUST_H
#define ADJUST_H

#include <QDialog>

namespace Ui {
class adjust;
}

class adjust : public QDialog
{
    Q_OBJECT

public:
    explicit adjust(QWidget *parent = 0);
    ~adjust();

private:
    Ui::adjust *ui;
};

#endif // ADJUST_H
