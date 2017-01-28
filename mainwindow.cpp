#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "new_item.h"
#include "adjust.h"
#include "addnew_customer.h"
#include "customer_drecord.h"
#include "customer_edit.h"
#include "QWidget"
#include "editusername.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQMIS_triggered()
{
    QMessageBox::information(this , tr("QIMS"), tr("Inventory managment system."),tr("Developed BY VISHAL AGNIHOTRI"));
}

void MainWindow::on_actionADD_NEW_triggered()
{
    New_Item new_item;
    new_item.setModal(true);
    new_item.exec();

}

void MainWindow::on_actionADJUSTMENT_triggered()
{
    adjust adjust;
    adjust.setModal(true);
    adjust.exec();
}

void MainWindow::on_actionADD_NEW_2_triggered()
{
    addnew_customer addnew_customer ;
    addnew_customer.setModal(true);
    addnew_customer.exec();
}



void MainWindow::on_actionCHECK_RECORD_triggered()
{
  customer_drecord customer_drecord;
  customer_drecord.setModal(true);
  customer_drecord.exec();
}

void MainWindow::on_actionEDIT_EXISTING_triggered()
{
   customer_edit customer_edit;
   customer_edit.setModal(true);
   customer_edit.exec();
}

void MainWindow::on_actionREPORT_ERROR_triggered()
{
    QMessageBox::information(this, tr("Error"),tr("Not Supported yet"));
}

void MainWindow::on_main_exit_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_actionEDIT_USERNAME_PASSWORED_triggered()
{
    editusername editusername;
    editusername.setModal(true);
    editusername.exec();
}
