#include "admi.h"
#include "ui_admi.h"
#include "user.h"
#include "ui_user.h"
#include "mainwindow.h"
#include "qmessagebox.h"

#include <fstream>

Admi::Admi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admi)
{
    ui->setupUi(this);
}

Admi::~Admi()
{
    delete ui;
}

int Admi::Login(string ID, string PW)
{
    fstream reader("Adm_Msg.txt");
    string name;
    string password;
    char save[100];
    while(reader.peek() != EOF){
        reader.getline(save,100);
        name = strtok(save,"#");
        if (ID == name){
            password = strtok(NULL,"#");
            if(PW == password){

                return 1;
            }
            else{

                return 2;
            }
        }
    }
    QMessageBox::information(this,"提示","账号不存在");
}

void Admi::on_pushButton_clicked()//管理员登录按钮
{
    Admi a;
    QString name = this->ui->lineEdit->text();
    QString password = this->ui->lineEdit_2->text();
    if(name.isEmpty()||password.isEmpty()){
        QMessageBox::information(this,"提示","手机号码或密码为空");
    }
    else{
        int i = a.Login(name.toStdString(),password.toStdString());
        if (i==1)
        {
            QMessageBox::information(this,"提示","登陆成功");
            MainWindow *w=new MainWindow;
            w->show();
            w->managermod();       //登录管理员模式
            this->close();
        }
        else if(i==2)
        {
            QMessageBox::information(this,"提示","密码错误");
        }
    }
}

void Admi::on_pushButton_2_clicked()//用户登录界面跳转
{
    User *u = new User;
    u->show();
    this->close();
}
