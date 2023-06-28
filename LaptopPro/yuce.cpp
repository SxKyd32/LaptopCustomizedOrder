#include "yuce.h"
#include "ui_yuce.h"
#include "qmessagebox.h"

YuCe::YuCe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::YuCe)
{
    ui->setupUi(this);
}

YuCe::~YuCe()
{
    delete ui;
}

void YuCe::on_pushButton_clicked()
{
    int cpu=this->ui->comboBox->currentIndex();
    int gpu=this->ui->comboBox_2->currentIndex();
    int neicun=this->ui->comboBox_3->currentIndex();
    int chicun=this->ui->comboBox_4->currentIndex();
    int yingpan=this->ui->comboBox_5->currentIndex();
    int fenbianlv=this->ui->comboBox_6->currentIndex();
    int shuaxinlv=this->ui->comboBox_7->currentIndex();
    int Acaizhi=this->ui->comboBox_8->currentIndex();
    int color=this->ui->comboBox_9->currentIndex();
    int keyboard=this->ui->comboBox_10->currentIndex();

    int cpu1,gpu1,neicun1,chicun1,yingpan1,fenbianlv1,shuaxinlv1,Acaizhi1,keyboard1;
    //cpu价位
    if(cpu==0)
       cpu1=1000;
    if(cpu==1)
       cpu1=1500;
    if(cpu==2)
       cpu1=2000;
    if(cpu==3)
       cpu1=2500;
    if(cpu==4)
       cpu1=3000;
    //gpu价位
    if(gpu==0)
       gpu1=500;
    if(gpu==1)
       gpu1=750;
    if(gpu==2)
       gpu1=1000;
    if(gpu==3)
       gpu1=1250;
    if(gpu==4)
       gpu1=1500;
    //内存容量价位
    if(neicun==0)
       neicun1=500;
    if(neicun==1)
       neicun1=1000;
    if(neicun==2)
       neicun1=1500;
    if(neicun==3)
       neicun1=2000;
    //屏幕尺寸价位
    if(chicun==0)
       chicun1=250;
    if(chicun==1)
       chicun1=500;
    if(chicun==2)
       chicun1=750;
    if(chicun==3)
       chicun1=1000;
    //硬盘价位
    if(yingpan==0)
       yingpan1=500;
    if(yingpan==1)
       yingpan1=750;
    if(yingpan==2)
       yingpan1=1000;
    //分辨率价位
    if(fenbianlv==0)
       fenbianlv1=500;
    if(fenbianlv==1)
       fenbianlv1=1000;
    if(fenbianlv==2)
       fenbianlv1=1500;
    //屏幕刷新率价位
    if(shuaxinlv==0)
       shuaxinlv1=500;
    if(shuaxinlv==1)
       shuaxinlv1=1000;
    if(shuaxinlv==2)
       shuaxinlv1=2000;
    //A面材质价位
    if(Acaizhi==0)
       Acaizhi1=100;
    if(Acaizhi==1)
       Acaizhi1=200;
    //键盘价位
    if(keyboard==0)
       keyboard1=100;
    if(keyboard==1)
       keyboard1=400;

    int sum;
    sum=cpu1+gpu1+neicun1+chicun1+yingpan1+fenbianlv1+shuaxinlv1+Acaizhi1+keyboard1;
    if(color==4)
        QMessageBox::information(this,"预测","您可能需要女版适用电脑");
    else if(sum>10000)
        QMessageBox::information(this,"预测","您可能需要尊贵旗舰版电脑");
    else if(sum>=6000&&sum<10000)
    {
        if(keyboard==0&&shuaxinlv>=1&&cpu>=2&&fenbianlv>=1&&chicun>=2)
            QMessageBox::information(this,"预测","您可能需要高清游戏版电脑");
        else if(keyboard==1&&chicun<=1)
            QMessageBox::information(this,"预测","您可能需要商务办公版电脑");
        else if(chicun>=2&&fenbianlv>=1&&neicun>=2&&keyboard==1)
            QMessageBox::information(this,"预测","您可能需要家庭影音版电脑");
        else
            QMessageBox::information(this,"预测","您可能需要学生版电脑");
    }
    else if(sum<6000)
        QMessageBox::information(this,"预测","您可能需要轻薄便携版电脑");
}

void YuCe::on_pushButton_2_clicked()
{
    MainWindow *w=new MainWindow;
    w->show();
    w->usermod();
    this->close();
}
