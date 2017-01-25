#ifndef FORMLOGIN_H
#define FORMLOGIN_H

#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>

class FORMLOGIN : public QDialog
{
    Q_OBJECT
  public:
    FORMLOGIN(QWidget* parent = 0);
    ~FORMLOGIN();
private slots:
    void OnQuit();
    void OnLogin();
private:
    void reject();
    QLabel* userLabel;
    QLabel* passLabel;
    QLineEdit* userLineEdit;
    QLineEdit* passLineEdit;
    QPushButton* loginButton;
    QPushButton* quitButton;
 };

#endif // FORMLOGIN_H
