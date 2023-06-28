#ifndef TUIJIAN_H
#define TUIJIAN_H

#include <QWidget>

namespace Ui {
class TuiJian;
}

class TuiJian : public QWidget
{
    Q_OBJECT

public:
    explicit TuiJian(QWidget *parent = nullptr);
    ~TuiJian();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::TuiJian *ui;
};

#endif // TUIJIAN_H
