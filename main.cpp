#include "mainwindow.h"
#include "formlogin.h"
#include <QApplication>
#include <QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* mainWindow = new MainWindow();
    FORMLOGIN* formLogin = new FORMLOGIN(mainWindow);
    formLogin->show();
    mainWindow->show();
    a.setWindowIcon(QIcon("D:/Sofwares/icon/rar_256.ico"));
    return a.exec();

}
