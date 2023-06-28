#ifndef ORDETAIL_H
#define ORDETAIL_H

#include <QWidget>
using namespace std;
namespace Ui {
class ordetail;
}

class ordetail : public QWidget
{
    Q_OBJECT

public:
    explicit ordetail(QWidget *parent = nullptr);
    ~ordetail();

    void showinf(string oid,string cid, string uid);

    void hidep();
private slots:
    void on_pushButton_clicked();

private:
    Ui::ordetail *ui;
};

#endif // ORDETAIL_H
