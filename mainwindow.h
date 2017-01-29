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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
