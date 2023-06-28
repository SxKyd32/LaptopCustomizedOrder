#include "tuijian.h"
#include "ui_tuijian.h"
#include "yuce.h"
#include "qmessagebox.h"

TuiJian::TuiJian(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TuiJian)
{
    ui->setupUi(this);
}

TuiJian::~TuiJian()
{
    delete ui;
}

void TuiJian::on_pushButton_clicked()
{
    int changjing=this->ui->comboBox_6->currentIndex();
    int money=ui->lineEdit_7->text().toInt();

    if(money<0)
            //保证价格非负
            QMessageBox::information(this,"warning","价格不能为负!");

    if(money>=10000||changjing==6)//尊贵旗舰
            QMessageBox::information(this,"推荐配置","CPU-AMD R7；GPU显存容量-8G；内存容量-64G；屏幕尺寸-17.3英寸；硬盘-1TB HDD；分辨率-4k；屏幕刷新率-240Hz");
    if(money<6000||changjing==5)//轻薄便携
            QMessageBox::information(this,"推荐配置","CPU-Intel i5；GPU显存容量-2G；内存容量-4G；屏幕尺寸-13.3英寸；硬盘-512G SSD；分辨率-1080p；屏幕刷新率-60Hz");
    if(money>=6000&&money<10000)
    {
        if(changjing==0)//商务办公
            QMessageBox::information(this,"推荐配置","CPU-Intel i7；GPU显存容量-4G；内存容量-8G；屏幕尺寸-13.3英寸；硬盘-512G SSD；分辨率-1080p；屏幕刷新率-60Hz");
        if(changjing==2)//女性适用
            QMessageBox::information(this,"推荐配置","CPU-Intel i5；GPU显存容量-2G；内存容量-8G；屏幕尺寸-13.3英寸；硬盘-512G SSD；分辨率-4k；屏幕刷新率-60Hz");
        if(changjing==1)//高清游戏
            QMessageBox::information(this,"推荐配置","CPU-Intel i9；GPU显存容量-6G；内存容量-16G；屏幕尺寸-15.6英寸；硬盘-1TB SSG；分辨率-1080p；屏幕刷新率-144Hz");
        if(changjing==3)//家庭影音
            QMessageBox::information(this,"推荐配置","CPU-Intel i5；GPU显存容量-4G；内存容量-4G；屏幕尺寸-17.3英寸；硬盘-1TB SSG；分辨率-4k；屏幕刷新率-60Hz");
        if(changjing==4)//学生适用
            QMessageBox::information(this,"推荐配置","CPU-Intel i7；GPU显存容量-4G；内存容量-8G；屏幕尺寸-14.0英寸；硬盘-512G SSD；分辨率-1080p；屏幕刷新率-60Hz");
    }
}

void TuiJian::on_pushButton_2_clicked()
{
    this->close();
    YuCe *y=new YuCe;
    y->show();
}

void TuiJian::on_pushButton_3_clicked()
{
    MainWindow *w=new MainWindow;
    w->show();
    w->usermod();
    this->close();
}
