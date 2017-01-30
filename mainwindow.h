#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_actionQMIS_triggered();

    void on_actionADD_NEW_triggered();

    void on_actionADJUSTMENT_triggered();

    void on_actionADD_NEW_2_triggered();

    void on_actionCHECK_RECORD_triggered();

    void on_actionEDIT_EXISTING_triggered();

    void on_actionREPORT_ERROR_triggered();

    void on_main_exit_clicked();

    void on_actionEDIT_USERNAME_PASSWORED_triggered();

    void on_actionUPDATE_triggered();

    void on_actionDEVELOPER_triggered();

    void on_actionHELP_triggered();

    void on_actionADD_NEW_3_triggered();

    void on_actionEDIT_EXISTING_2_triggered();

    void on_actionDISPLAY_RECORD_2_triggered();

    void on_actionDISPLAY_RECORD_3_triggered();

    void on_actionADD_NEW_4_triggered();

    void on_pushButton_clicked();

    void on_actionPAYMENT_RECORD_triggered();

    void on_actionGOODS_AND_PAYMENT_triggered();

    void showTime();

    void on_actionPAYMENTS_2_triggered();

    void on_actionEDIT_EXIXTING_triggered();

    void on_actionPAYMENTS_triggered();

    void on_actionDISPLAY_RECORD_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
