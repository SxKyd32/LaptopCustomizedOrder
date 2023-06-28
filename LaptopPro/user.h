#ifndef USER_H
#define USER_H

#include <QDialog>
#include <string>

using namespace std;

namespace Ui {
class User;
}

class User : public QDialog
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();
    int Login(string ID,string PW);
    void Regist(string str1,string str2,string str3,string str4,string str5,string str6,string str7,string str8);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked()__attribute__((noreturn));

private:
    Ui::User *ui;
};

#endif // USER_H
