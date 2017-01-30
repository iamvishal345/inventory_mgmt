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
#include "customer_payments.h"
#include "vehicle_payment.h"
#include "supplier_edit.h"
#include "supplier_payment.h"
#include "supplier_record.h"
#include <QDesktopWidget>
#include <QTimer>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QTimer *timer=new QTimer(this);
    connect (timer , SIGNAL(timeout()),this,SLOT(showTime()));
            timer->start();
    resize(QDesktopWidget().availableGeometry(this).size() * 0.8);

}
void MainWindow::showTime()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->DigitalClock->setText(time_text);

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

void MainWindow::on_pushButton_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_actionGOODS_AND_PAYMENT_triggered()
{
    vehicle_payment vehicle_payment;
    vehicle_payment.setModal(true);
    vehicle_payment.exec();
}

void MainWindow::on_actionPAYMENTS_2_triggered()
{
    customer_payments customer_payments;
    customer_payments.setModal(true);
    customer_payments.exec();
}

void MainWindow::on_actionEDIT_EXIXTING_triggered()
{
    supplier_edit supplier_edit;
    supplier_edit.setModal(true);
    supplier_edit.exec();
}

void MainWindow::on_actionPAYMENTS_triggered()
{
    supplier_payment supplier_payment;
    supplier_payment.setModal(true);
    supplier_payment.exec();
}

void MainWindow::on_actionDISPLAY_RECORD_triggered()
{
    supplier_record supplier_record;
    supplier_record.setModal(true);
    supplier_record.exec();
}
