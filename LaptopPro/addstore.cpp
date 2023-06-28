#include "addstore.h"
#include "ui_addstore.h"
#include "mainwindow.h"
#include "qmessagebox.h"
#include "windows.h"
#include "qstring.h"
#include <fstream>
#include <iostream>
using namespace std;
addstore::addstore(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addstore)
{
    ui->setupUi(this);
}

addstore::~addstore()
{
    delete ui;
}

void addstore::on_pushButton_clicked()
{

    SYSTEMTIME sys;
    GetLocalTime(&sys);
    string sid;
    sid = std::to_string(sys.wYear) + std::to_string(sys.wMonth) + std::to_string(sys.wDay) + std::to_string(sys.wHour) + std::to_string(sys.wMinute)+std::to_string(sys.wSecond);

    ofstream fstr("store.txt",ios::app);
    string inf;
    inf += "\n"+sid +"#";
    inf += this->ui->comboBox->currentText().toStdString() +"#";
    inf += this->ui->comboBox_2->currentText().toStdString() +"#";
    inf += this->ui->comboBox_3->currentText().toStdString() +"#";
    inf += this->ui->comboBox_9->currentText().toStdString() +"#";
    inf += this->ui->comboBox_4->currentText().toStdString() +"#";
    inf += this->ui->comboBox_5->currentText().toStdString() +"#";
    inf += this->ui->comboBox_6->currentText().toStdString() +"#";
    inf += this->ui->comboBox_10->currentText().toStdString() +"#";
    inf += this->ui->comboBox_8->currentText().toStdString() +"#";
    inf += this->ui->comboBox_7->currentText().toStdString();
    fstr << inf;
    fstr.close();
    QMessageBox::information(this,"提示","入库成功");
}

void addstore::on_pushButton_2_clicked()
{
    MainWindow *w=new MainWindow;
    //w->show();
    w->managermod();
    this->close();
}
