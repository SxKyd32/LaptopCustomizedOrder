#include "waitlist.h"
#include "ui_waitlist.h"
#include "mainwindow.h"
#include <fstream>
#include <iostream>
#include "qmessagebox.h"
#include "windows.h"
#include "qstring.h"
#include "ordetail.h"

using namespace std;

waitlist::waitlist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::waitlist)
{
    ui->setupUi(this);

    this->ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//设置适应列宽
    this->ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中整行
    this->ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection);//设置选中单个
    this->ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);   //设置单元格不可修改

    this->ui->tableWidget->setRowCount(1000);
    int i;
    ifstream ford("order.txt");
    string a[5];
    char r[500];
    for(i=0;ford.peek()!=EOF;i++)
    {
        int b=0;
        ford.getline(r,500);
        a[b]=strtok(r,"#");
        b++;
        for(;b<5;b++)
        {
            a[b]=strtok(NULL,"#");
        }
        if(a[4] == "0")
        {
            i--;
            continue;
        }

        this->ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(a[0])));
        this->ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(a[1])));
        this->ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::fromStdString(a[3])));
    }
    this->ui->tableWidget->setRowCount(i);
}

waitlist::~waitlist()
{
    delete ui;
}

void waitlist::on_pushButton_clicked()
{
    MainWindow *w=new MainWindow;
    //w->show();
    w->managermod();
    this->close();
}

void waitlist::on_tableWidget_cellActivated(int row, int column)
{

    string oid = this->ui->tableWidget->item(row,0)->text().toStdString();
    string cid;
    string uid;
    string comp[11];
    char r[500];
    fstream fodr("order.txt");
    for(;fodr.peek()!=EOF;)
    {
        fodr.getline(r,500);
        if (oid == strtok(r,"#"))
        {
            uid = strtok(NULL,"#");
            cid = strtok(NULL,"#");
        }
    }
    fodr.close();
    ordetail *o = new ordetail();
    o->showinf(oid,cid,uid);
    o->show();
}
