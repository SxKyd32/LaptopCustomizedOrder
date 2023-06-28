#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void usermod();

    void managermod();

    void deal(string oid);              //订单处理

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void addorder(string cid,string mark);  //添加订单信息

    void addneed(string id);          //添加至需求库

    void del(string cid);              //删除库存

    void updatable();

    void on_tableWidget_cellDoubleClicked(int row, int column);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked()__attribute__((noreturn));

    void on_pushButton_9_clicked();

    void on_tableWidget_cellClicked(int row, int column);

    void on_tableWidget_cellPressed(int row, int column);

    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
