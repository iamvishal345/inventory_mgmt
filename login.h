#ifndef LOGIN_H
#define LOGIN_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_p_login_clicked();

private:
    Ui::login *ui;
    MainWindow *mainWindow;
};

#endif // LOGIN_H
