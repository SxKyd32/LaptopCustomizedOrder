#ifndef YUCE_H
#define YUCE_H

#include "mainwindow.h"
#include <QWidget>

namespace Ui {
class YuCe;
}

class YuCe : public QWidget
{
    Q_OBJECT

public:
    explicit YuCe(QWidget *parent = nullptr);
    ~YuCe();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::YuCe *ui;
};

#endif // YUCE_H
