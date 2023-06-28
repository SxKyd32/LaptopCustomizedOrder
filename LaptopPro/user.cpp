#include "user.h"
#include "ui_user.h"
#include "register.h"
#include "ui_register.h"
#include "admi.h"
#include "ui_admi.h"
#include "mainwindow.h"
#include "qmessagebox.h"

#include <QString>
#include <string>
#include <fstream>

extern string usr;

User::User(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
}

User::~User()
{
    delete ui;
}

int User::Login(string ID, string PW){
    fstream reader("Msg.txt");
    string name;
    string password;
    char save[100];
    while(reader.peek() != EOF){
        reader.getline(save,100);
        name = strtok(save,"#");
        if (ID == name){
            password = strtok(NULL,"#");
            if(PW == password){
                usr = ID;
                return 1;
            }
            else{

                return 2;
            }
        }
    }
    QMessageBox::information(this,"提示","账号不存在");
}


void User::Regist(string str1,string str2,string str3,string str4,string str5,string str6,string str7,string str8){
    ofstream w("Msg.txt",ios::app);
    if(w.is_open()){
        w << str1 << "#"
          << str2 << "#"
          << str3 << "#"
          << str4 << "#"
          << str5 << "#"
          << str6 << "#"
          << str7 << "#"
          << str8 << "#"
          << endl;
    }
}

void User::on_pushButton_2_clicked()//注册界面跳转
{
    Register *r = new Register;
    r->show();
    this->close();
}

void User::on_pushButton_clicked()//登录按钮
{
    User u;
    QString name = this->ui->lineEdit->text();
    QString password = this->ui->lineEdit_2->text();
    if(name.isEmpty()||password.isEmpty()){
        QMessageBox::information(this,"提示","手机号码或密码为空");
    }
    else{
        int i = u.Login(name.toStdString(),password.toStdString());
        if (i==1)
        {
            QMessageBox::information(this,"提示","登陆成功");
            MainWindow *w=new MainWindow;
            w->show();
            w->usermod();       //登录用户模式
            this->close();
        }
        else if (i==2)
        {
            QMessageBox::information(this,"提示","密码错误");
        }
   }
}

void User::on_pushButton_3_clicked()//管理员界面跳转
{
    Admi *a = new Admi;
    a->show();
    this->close();
}

void User::on_pushButton_4_clicked()
{
    exit(0);
}
