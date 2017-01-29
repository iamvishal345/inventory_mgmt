#include "mainwindow.h"
#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_p_login_clicked()
{
    QString username = ui->t_username->text();
    QString password = ui->t_password->text();
    if (username == "root" && password == "fine")
    {

        mainWindow =new MainWindow(this);
        mainWindow->show();
    }

}
