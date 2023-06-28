#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ordetail.h"
#include "addstore.h"
#include "waitlist.h"
#include "tuijian.h"
#include "yuce.h"

#include <fstream>
#include <iostream>
#include "qmessagebox.h"
#include "windows.h"
#include "qstring.h"


using namespace std;
extern string usr;
extern string findid;
extern string ty;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->frame_2->hide();
    this->ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//设置适应列宽
    this->ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中整行
    this->ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection);//设置选中单个
    this->ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);   //设置单元格不可修改
    this->ui->lineEdit->hide();
    this->ui->pushButton_10->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()    //查询按钮
{
    string comp[11];
    char r[500];
    int mark = 0;
    fstream fstore("store.txt");
    for(;fstore.peek()!=EOF;)
    {
        int b=0;
        fstore.getline(r,500);
        comp[0]=strtok(r,"#");
        for(int i=1; i<11;i++)
        {
            comp[i] = strtok(NULL,"#");
        }
        b++;
        if(comp[1]==this->ui->comboBox->currentText().toStdString()&&
           comp[2]==this->ui->comboBox_2->currentText().toStdString()&&
           comp[3]==this->ui->comboBox_3->currentText().toStdString()&&
           comp[4]==this->ui->comboBox_4->currentText().toStdString()&&
           comp[5]==this->ui->comboBox_5->currentText().toStdString()&&
           comp[6]==this->ui->comboBox_6->currentText().toStdString()&&
           comp[7]==this->ui->comboBox_7->currentText().toStdString()&&
           comp[8]==this->ui->comboBox_8->currentText().toStdString()&&
           comp[9]==this->ui->comboBox_9->currentText().toStdString()&&
           comp[10]==this->ui->comboBox_10->currentText().toStdString())
        {
            mark = 1;
            break;
        }
    }
    fstore.close();
    if(mark == 0)
    {
        QMessageBox::StandardButton rb = QMessageBox::information(this,"提示","未找到货源，是否定制？",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        if (rb == QMessageBox::Yes)
        {
            QMessageBox::information(this,"","定制信息已传达");

            string tid;
            SYSTEMTIME sys;
            GetLocalTime(&sys);           
            if( stoi(std::to_string(sys.wMinute)) < 10 ){
                tid = std::to_string(sys.wYear) + std::to_string(sys.wMonth) + std::to_string(sys.wDay) + std::to_string(sys.wHour) + '0' + std::to_string(sys.wMinute) + std::to_string(sys.wSecond);
            }
            else {
        tid = std::to_string(sys.wYear) + std::to_string(sys.wMonth) + std::to_string(sys.wDay) + std::to_string(sys.wHour) + std::to_string(sys.wMinute)+std::to_string(sys.wSecond);
            }

            //将配置存入“需求库”
            addneed(tid);

            //添加信息至订单表
            addorder(tid,"0");
        }
    }
    else {
        QMessageBox::StandardButton rb = QMessageBox::information(this,"提示","找到货源，是否确认购买？",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        if (rb == QMessageBox::Yes)
        {
            QMessageBox::information(this, "提示", "购买成功，已放入待购表。");
            //减少库存函数
            del(comp[0]);
            //将配置存入“需求库”
            addneed(comp[0]);
            //添加信息到订单
            addorder(comp[0],"1");
        }
    }
}

void MainWindow::del(string cid)        //删除库存
{
    fstream fstore("store.txt");
    string comp;
    char r[500];
    string comment;
    for(;fstore.peek()!=EOF;)
    {
        fstore.getline(r,500);
        string temp = r;
        comp=strtok(r,"#");
        if(comp == cid)
            continue;
        comment += temp;
        if(fstore.peek()!=EOF)
            comment += "\n";
    }
    fstore.close();
    ofstream fstore2("store.txt",ios::trunc);
    fstore2 << comment;
    fstore2.close();
}



void MainWindow::addneed(string id)         //添加到需求库
{
    ofstream fstr("need.txt",ios::app);
    string inf;
    inf += "\n"+id +"#";
    inf += this->ui->comboBox->currentText().toStdString() +"#";
    inf += this->ui->comboBox_2->currentText().toStdString() +"#";
    inf += this->ui->comboBox_3->currentText().toStdString() +"#";
    inf += this->ui->comboBox_4->currentText().toStdString() +"#";
    inf += this->ui->comboBox_5->currentText().toStdString() +"#";
    inf += this->ui->comboBox_6->currentText().toStdString() +"#";
    inf += this->ui->comboBox_7->currentText().toStdString() +"#";
    inf += this->ui->comboBox_8->currentText().toStdString() +"#";
    inf += this->ui->comboBox_9->currentText().toStdString() +"#";
    inf += this->ui->comboBox_10->currentText().toStdString();
    fstr << inf;
    fstr.close();;
}

void MainWindow::addorder(string cid,string mark)     //添加订单
{
    SYSTEMTIME sys;
    GetLocalTime(&sys);
    string t,tid;

    if( stoi(std::to_string(sys.wMinute)) < 10 ){
        t = std::to_string(sys.wYear) +"/"+ std::to_string(sys.wMonth) +"/"+ std::to_string(sys.wDay) +"/"+ std::to_string(sys.wHour) +":"+ '0' + std::to_string(sys.wMinute);
        tid = std::to_string(sys.wYear) + std::to_string(sys.wMonth) + std::to_string(sys.wDay) + std::to_string(sys.wHour) + '0' + std::to_string(sys.wMinute) + std::to_string(sys.wSecond);
    }
    else {
t = std::to_string(sys.wYear) +"/"+ std::to_string(sys.wMonth) +"/"+ std::to_string(sys.wDay) +"/"+ std::to_string(sys.wHour) +":"+ std::to_string(sys.wMinute);
tid = std::to_string(sys.wYear) + std::to_string(sys.wMonth) + std::to_string(sys.wDay) + std::to_string(sys.wHour) + std::to_string(sys.wMinute)+std::to_string(sys.wSecond);
    }

    ofstream ford("order.txt",ios::app);
    ford << tid << "#" << usr << "#" << cid << "#" << t << "#" << mark << endl;
    ford.close();
}



void MainWindow::on_pushButton_3_clicked()  //我的订单
{
    this->ui->frame->hide();
    this->ui->frame_2->show();

    this->ui->tableWidget->setRowCount(1000);
    int i;
    ifstream ford("order.txt");
    string a[5];
    char r[500];
    for(i=0;ford.peek()!=EOF;i++)
    {
        int b=0;
        ford.getline(r,500);
        a[0]=strtok(r,"#");
        a[1]=strtok(NULL,"#");
        if (a[1]!=usr)
        {
            i--;
            continue;
        }
        this->ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(a[0])));
        this->ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(a[1])));
        b = 2;
        for(;b<5;b++)
        {
            a[b]=strtok(NULL,"#");
            if(b==4)
            {
                if(a[b]=="0")
                    a[b] = "未处理";
                else a[b] = "已经处理";
            }
            this->ui->tableWidget->setItem(i,b,new QTableWidgetItem(QString::fromStdString(a[b])));
        }
    }
    this->ui->tableWidget->setRowCount(i);


}

void MainWindow::on_pushButton_2_clicked()  //查询
{
    this->ui->frame->show();
    this->ui->frame_2->hide();
}

void MainWindow::on_tableWidget_cellDoubleClicked(int row, int column)  //双击查看详情
{
    QString x;
    string oid = this->ui->tableWidget->item(row,0)->text().toStdString();
    findid = this->ui->tableWidget->item(row,2)->text().toStdString();
    string uid = this->ui->tableWidget->item(row,1)->text().toStdString();
    //QMessageBox::information(this,"提示",QString::fromStdString(findid));
    ordetail *o = new ordetail();
    o->showinf(oid,findid,uid);
    if(ty=="1")
    {
        int r = QMessageBox::question(this,"提示","是否处理订单"+QString::fromStdString(oid),"处理","查看详情","取消");
        if (r == 0)
        {
            this->deal(oid);
            QMessageBox::information(this, "提示", "处理完成");
            return;
        }
        if(r == 1)
        {
            o->show();
            return;
        }
        else {
            return;
        }
    }
    o->show();
}

void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    ;
}


void MainWindow::on_tableWidget_cellPressed(int row, int column)
{
    ;
}


void MainWindow::on_pushButton_4_clicked()      //入库按钮
{
    addstore *a = new addstore;
    a->show();
    //this->close();
}

void MainWindow::on_pushButton_5_clicked()      //查看待购表按钮
{
    waitlist *w = new waitlist;
    w->show();
    //this->close();
}

void MainWindow::usermod()      //用户模式
{
    this->ui->groupBox_2->hide();
}

void MainWindow::managermod()       //管理员模式
{
    this->ui->groupBox->hide();
    this->ui->frame->hide();
    this->ui->frame_2->hide();
    this->ui->lineEdit->show();
    this->ui->pushButton_10->show();
    ty = "1";
}

void MainWindow::on_pushButton_6_clicked()      //跳转到推荐配置界面
{
    TuiJian *t = new TuiJian;
    t->show();
    this->close();
}

void MainWindow::on_pushButton_7_clicked()      //跳转到预测场景界面
{
    YuCe *y = new YuCe;
    y->show();
    this->close();
}

void MainWindow::on_pushButton_8_clicked()      //退出
{
    exit(0);
}

void MainWindow::on_pushButton_9_clicked()      //订单处理
{
    this->ui->frame_2->show();
    this->ui->tableWidget->setRowCount(1000);
    int i;
    ifstream ford("order.txt");
    string a[5];
    char r[500];
    for(i=0;ford.peek()!=EOF;i++)
    {
        int b=0;
        ford.getline(r,500);
        a[0]=strtok(r,"#");
        a[1]=strtok(NULL,"#");
        a[2]=strtok(NULL,"#");
        a[3]=strtok(NULL,"#");
        a[4]=strtok(NULL,"#");
        if(a[4]=="1")
        {
            i--;
            continue;
        }
        a[4] = "未处理";
        this->ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(a[0])));
        this->ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(a[1])));
        this->ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::fromStdString(a[2])));
        this->ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::fromStdString(a[3])));
        this->ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::fromStdString(a[4])));
    }
    this->ui->tableWidget->setRowCount(i);
}

void MainWindow::deal(string oid)
{
    fstream ford("order.txt");
    string comp[5];
    char r[500];
    string comment;
    for(;ford.peek()!=EOF;)
    {
        ford.getline(r,500);
        string temp = r;
        comp[0]=strtok(r,"#");
        comp[1]=strtok(NULL,"#");
        comp[2]=strtok(NULL,"#");
        comp[3]=strtok(NULL,"#");
        comp[4]=strtok(NULL,"#");
        if(comp[0] == oid)
            comment += comp[0]+"#"+comp[1]+"#"+comp[2]+"#"+comp[3]+"#1";
        else comment += temp;
        //if(ford.peek()!=EOF)
            comment += "\n";
    }
    ford.close();
    ofstream ford2("order.txt",ios::trunc);
    ford2 << comment;
    ford2.close();
    updatable();
}

void MainWindow::updatable()        //更新已完成的订单列表
{
    int i;
    char r[500];
    ifstream ford3("order.txt");
    string a[5];
    for(i=0;ford3.peek()!=EOF;i++)
    {
        this->ui->tableWidget->setRowCount(1000);
        int b=0;
        ford3.getline(r,500);
        a[0]=strtok(r,"#");
        a[1]=strtok(NULL,"#");
        a[2]=strtok(NULL,"#");
        a[3]=strtok(NULL,"#");
        a[4]=strtok(NULL,"#");
        if(a[4]=="1")
        {
            i--;
            continue;
        }
        a[4] = "未处理";
        this->ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(a[0])));
        this->ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(a[1])));
        this->ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::fromStdString(a[2])));
        this->ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::fromStdString(a[3])));
        this->ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::fromStdString(a[4])));
    }
    this->ui->tableWidget->setRowCount(i);
    ford3.close();
}



void MainWindow::on_pushButton_10_clicked()     //订单查询
{
    string foid = this->ui->lineEdit->text().toStdString();
    ifstream ford("order.txt");
    string oid,uid,cid;
    char r[500];
    int mark = 0;
    for(;ford.peek()!=EOF;)
    {
        ford.getline(r,500);
        oid=strtok(r,"#");
        if(oid == foid)
        {
            mark = 1;
            uid = strtok(NULL,"#");
            cid = strtok(NULL,"#");
            break;
        }
    }
    if (mark == 0)
    {
        QMessageBox::information(this,"提示","未找到该订单,请检查订单号输入是否正确");
        return;
    }

    ordetail *o = new ordetail;
    o->showinf(oid,cid,uid);
    int m = QMessageBox::question(this,"提示","已找到订单"+QString::fromStdString(oid)+"是否处理？","处理","查看详情","取消");
    if (m == 0)
    {
        this->deal(oid);
        QMessageBox::information(this, "提示", "处理完成");
        return;
    }
    if(m == 1)
    {
        o->show();
        return;
    }
    else {
        return;
    }
}
