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
#include "addnewvehicle.h"
#include "editvehicle.h"
#include "vehicle_record.h"
#include "stock_record.h"
#include "addnew_supplier.h"
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    resize(QDesktopWidget().availableGeometry(this).size() * 0.8);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQMIS_triggered()
{
    QMessageBox::information(this , tr("QIMS"), tr("QIMS version 1.0"));
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

void MainWindow::on_actionUPDATE_triggered()
{
 QMessageBox::information(this,tr("UPDATE"),tr("Software Upto Date"));
}

void MainWindow::on_actionDEVELOPER_triggered()
{
    QMessageBox::information(this,tr("DEVELOPER"),tr("Vishal Agnihotri\n" "Kartik Narwal"));
}

void MainWindow::on_actionHELP_triggered()
{
    QMessageBox::information(this,tr("HELP"),tr("Contact 9816120038"));
}

void MainWindow::on_actionADD_NEW_3_triggered()
{
    addnewvehicle addnewvehicle;
    addnewvehicle.setModal(true);
    addnewvehicle.exec();
}

void MainWindow::on_actionEDIT_EXISTING_2_triggered()
{
    editvehicle editvehicle;
    editvehicle.setModal(true);
    editvehicle.exec();
}

void MainWindow::on_actionDISPLAY_RECORD_2_triggered()
{
    vehicle_record vehicle_record;
    vehicle_record.setModal(true);
    vehicle_record.exec();
}

void MainWindow::on_actionDISPLAY_RECORD_3_triggered()
{
    stock_record stock_record;
    stock_record.setModal(true);
    stock_record.exec();
}



void MainWindow::on_actionADD_NEW_4_triggered()
{
    addnew_supplier addnew_supplier;
    addnew_supplier.setModal(true);
    addnew_supplier.exec();
}
