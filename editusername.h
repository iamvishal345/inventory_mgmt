#ifndef EDITUSERNAME_H
#define EDITUSERNAME_H

#include <QDialog>

namespace Ui {
class editusername;
}

class editusername : public QDialog
{
    Q_OBJECT

public:
    explicit editusername(QWidget *parent = 0);
    ~editusername();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::editusername *ui;
};

#endif // EDITUSERNAME_H
