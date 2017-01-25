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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
