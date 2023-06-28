#include "register.h"
#include "ui_register.h"
#include "user.h"
#include "ui_user.h"
#include "qmessagebox.h"

#include <QString>
#include <string>
#include <fstream>

using namespace std;

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()//注册按钮
{
    User u;
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    int flag4 = 0;
    int i = 0;
    int j = 0;
    char save[100];
    string ID;
    fstream reader("Msg.txt");
    while(reader.peek() != EOF){
        reader.getline(save,100);
        ID = strtok(save,"#");
        if(ID == this->ui->lineEdit->text().toStdString()){ // 用户名查重
            QMessageBox::information(this,"提示","该用户名已存在");
            flag1 = 1;
            break;
        }
    }
    if(flag1 == 0){                               //读取信息
        QString qstr1 = this->ui->lineEdit->text();
        QString qstr2 = this->ui->lineEdit_2->text();
        QString qstr3 = this->ui->lineEdit_3->text();
        QString qstr4 = this->ui->lineEdit_4->text();
        QString qstr5 = this->ui->lineEdit_5->text();
        QString qstr6 = this->ui->lineEdit_6->text();
        QString qstr7 = this->ui->lineEdit_7->text();
        QString qstr8 = this->ui->lineEdit_8->text();
        if(qstr1.isEmpty()){ //判断信息是否为空
            flag2 = 1;
            QMessageBox::information(this,"提示","信息不能为空");
        }
        else if(qstr2.isEmpty()){
            flag2 = 1;
            QMessageBox::information(this,"提示","信息不能为空");
        }
        else if(qstr3.isEmpty()){
            flag2 = 1;
            QMessageBox::information(this,"提示","信息不能为空");
        }
        else if(qstr4.isEmpty()){
            flag2 = 1;
            QMessageBox::information(this,"提示","信息不能为空");
        }
        else if(qstr5.isEmpty()){
            flag2 = 1;
            QMessageBox::information(this,"提示","信息不能为空");
        }
        else if(qstr6.isEmpty()){
            flag2 = 1;
            QMessageBox::information(this,"提示","信息不能为空");
        }
        else if(qstr7.isEmpty()){
            flag2 = 1;
            QMessageBox::information(this,"提示","信息不能为空");
        }
        else if(qstr8.isEmpty()){
            flag2 = 1;
            QMessageBox::information(this,"提示","信息不能为空");
        }
        else {
            flag2 = 0;
        }
        if(flag2 == 0){
            string str1 = qstr1.toStdString();
            string str2 = qstr2.toStdString();
            string str3 = qstr3.toStdString();
            string str4 = qstr4.toStdString();
            string str5 = qstr5.toStdString();
            string str6 = qstr6.toStdString();
            string str7 = qstr7.toStdString();
            string str8 = qstr8.toStdString();
            for(i = 0;i < 8;i++){                //检查非法字符
                switch(i){
                case 0:
                    for(j = 0;j<str1.size();j++){
                        if(str1.at(j)>'9'||str1.at(j)<'0')
                        {
                            QMessageBox::information(this,"提示","请输入正确的手机号码");
                            flag3 = 1;
                            break;
                        }
                    }
                    break;
                case 1:
                    if(qstr2.contains("#")){
                        QMessageBox::information(this,"提示","输入非法字符‘#’");
                        flag3 = 1;
                    }
                    break;
                case 2:
                    if(qstr3.contains("#")){
                        QMessageBox::information(this,"提示","输入非法字符‘#’");
                        flag3 = 1;
                    }
                    break;
                case 3:
                    if(qstr4.contains("#")){
                        QMessageBox::information(this,"提示","输入非法字符‘#’");
                        flag3 = 1;
                    }
                    break;
                case 4:
                    if(qstr5.contains("#")){
                        QMessageBox::information(this,"提示","输入非法字符‘#’");
                        flag3 = 1;
                    }
                    break;
                case 5:
                    if(qstr6.contains("#")){
                        QMessageBox::information(this,"提示","输入非法字符‘#’");
                        flag3 = 1;
                    }
                    break;
                case 6:
                    if(qstr7.contains("#")){
                        QMessageBox::information(this,"提示","输入非法字符‘#’");
                        flag3 = 1;
                    }
                    break;
                case 7:
                    if(qstr8.contains("#")){
                        QMessageBox::information(this,"提示","输入非法字符‘#’");
                        flag3 = 1;
                    }
                    break;
                default:break;
                }
                if(flag3 ==1)
                {
                    break;
                }
            }
            if(flag3 == 0){                      //限制位数
               // u.Regist(str1,str2,str3,str4,str5,str6,str7,str8);
               // QMessageBox::information(this,"提示","注册成功");
               if(qstr1.length() != 11){
                   QMessageBox::information(this,"提示","请输入正确的手机号码");
                   flag4 = 1;
               }
               else if(qstr2.length() > 8){
                   QMessageBox::information(this,"提示","请输入8位密码");
                   flag4 = 1;
               }
               else if(qstr3.length() > 8){
                   QMessageBox::information(this,"提示","昵称过长");
                   flag4 = 1;
               }
               else if(qstr4.length() > 5){
                   QMessageBox::information(this,"提示","真实姓名输入过长");
                   flag4 = 1;
               }
               else if(qstr5.length() > 20){
                   QMessageBox::information(this,"提示","邮箱输入过长");
                   flag4 = 1;
               }
               else if(qstr6.length() > 5){
                   QMessageBox::information(this,"提示","地址输入过长");
                   flag4 = 1;
               }
               else if(qstr7.length() > 5){
                   QMessageBox::information(this,"提示","地址输入过长");
                   flag4 = 1;
               }
               else if(qstr8.length() > 5){
                   QMessageBox::information(this,"提示","地址输入过长");
                   flag4 = 1;
               }
               else{
                   flag4 = 0;
               }
               if(flag4 == 0){
                   u.Regist(str1,str2,str3,str4,str5,str6,str7,str8);
                   QMessageBox::information(this,"提示","注册成功");
                   User *u = new User;
                   u->show();
                   this->close();
               }
            }
        }
    }
    reader.close();
}


void Register::on_pushButton_2_clicked()//登录界面跳转
{
    User *u = new User;
    u->show();
    this->close();
}
