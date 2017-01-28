#include "formlogin.h"
#include<QMessageBox>

FORMLOGIN::FORMLOGIN(QWidget *parent)
    : QDialog(parent)
{
    setFixedSize(300,120);
    setWindowTitle("Login");
    setModal(true);
    setAttribute(Qt::WA_DeleteOnClose);

    userLabel = new QLabel("Username");
    passLabel = new QLabel("Password");
    userLineEdit = new QLineEdit();
    passLineEdit = new QLineEdit();
    passLineEdit->setEchoMode(QLineEdit::Password);
    loginButton = new QPushButton("Login");
    quitButton = new QPushButton("Quit");

    QVBoxLayout* vbox = new QVBoxLayout(this);
    QHBoxLayout* hbox1 = new QHBoxLayout();
    QHBoxLayout* hbox2 = new QHBoxLayout();
    QHBoxLayout* hbox3 = new QHBoxLayout();

    hbox1->addWidget(userLabel,1);
    hbox1->addWidget(userLineEdit,2);
    hbox2->addWidget(passLabel,1);
    hbox2->addWidget(passLineEdit,2);
    hbox3->addWidget(loginButton,1);
    hbox3->addWidget(quitButton,0);

    vbox->addSpacing(1);
    vbox->addLayout(hbox1);
    vbox->addLayout(hbox2);
    vbox->addLayout(hbox3);

    connect(quitButton,SIGNAL(clicked()),this,SLOT(OnQuit()));
    connect(loginButton,SIGNAL(clicked()),this,SLOT(OnLogin()));
 }
 void FORMLOGIN::reject()
 {
     OnQuit();
 }
 void FORMLOGIN::OnQuit()
 {
     this->close();
     parentWidget()->close();
 }
 void FORMLOGIN::OnLogin()
 {
     QString username =userLineEdit->text();
     QString password = userLineEdit->text();
  //  if (username == "root" && password == "word")

    if (username.isEmpty() && password.isEmpty())
    {     QMessageBox::warning(this,tr("Error!"),tr("Username or Password can not be empty"));
    }
    if (username == "test" && password == "test")
        this->destroy();
    else
      QMessageBox::warning(this,tr("Error"),tr("Username or Password is Wrong"));
   }


 FORMLOGIN::~FORMLOGIN(){}






