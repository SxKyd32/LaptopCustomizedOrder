#include "ordetail.h"
#include "ui_ordetail.h"
#include "fstream"
#include "mainwindow.h"
using namespace std;

extern string findid;
extern string usr;

ordetail::ordetail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ordetail)
{
    ui->setupUi(this);
}


void ordetail::showinf(string oid,string cid, string uid)
{
    //读取并显示电脑信息
    this->ui->label_18->setText(QString::fromStdString(oid));
    string comp[11];
    char r[500];
    fstream fned("need.txt");
    for(;fned.peek()!=EOF;)
    {
        fned.getline(r,500);
        comp[0]=strtok(r,"#");
        if(comp[0]==cid)
        {
            this->ui->label_9->setText(this->ui->label_9->text() + QString::fromStdString(strtok(NULL,"#")));
            this->ui->label_13->setText(this->ui->label_13->text() + QString::fromStdString(strtok(NULL,"#")));
            this->ui->label_10->setText(this->ui->label_10->text() + QString::fromStdString(strtok(NULL,"#")));
            this->ui->label_14->setText(this->ui->label_14->text() + QString::fromStdString(strtok(NULL,"#")));
            this->ui->label_11->setText(this->ui->label_11->text() + QString::fromStdString(strtok(NULL,"#")));
            this->ui->label_15->setText(this->ui->label_15->text() + QString::fromStdString(strtok(NULL,"#")));
            this->ui->label_12->setText(this->ui->label_12->text() + QString::fromStdString(strtok(NULL,"#")));
            this->ui->label_17->setText(this->ui->label_17->text() + QString::fromStdString(strtok(NULL,"#")));
            this->ui->label_16->setText(this->ui->label_16->text() + QString::fromStdString(strtok(NULL,"#")));
        }
    }
    fned.close();
    //读取并显示用户信息
    string uinf[8];
    fstream fusr("Msg.txt");
    for(;fusr.peek()!=EOF;)
    {
        fusr.getline(r,500);
        uinf[0]=strtok(r,"#");
        if(uinf[0]==uid)
        {
            this->ui->label_6->setText(this->ui->label_6->text() + QString::fromStdString(uinf[0]));            //电话
            uinf[1] = strtok(NULL,"#");                                                                         //密码
            this->ui->label_3->setText(this->ui->label_3->text() + QString::fromStdString(strtok(NULL,"#")));   //昵称
            this->ui->label_4->setText(this->ui->label_4->text() + QString::fromStdString(strtok(NULL,"#")));   //姓名
            this->ui->label_5->setText(this->ui->label_5->text() + QString::fromStdString(strtok(NULL,"#")));   //邮箱
            this->ui->label_7->setText(this->ui->label_7->text() + QString::fromStdString(strtok(NULL,"#")));   //地址
        }
    }
}


ordetail::~ordetail()
{
    delete ui;
}

void ordetail::on_pushButton_clicked()
{
    this->close();
}

