#ifndef ADDSTORE_H
#define ADDSTORE_H

#include <QWidget>

namespace Ui {
class addstore;
}

class addstore : public QWidget
{
    Q_OBJECT

public:
    explicit addstore(QWidget *parent = nullptr);
    ~addstore();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addstore *ui;
};

#endif // ADDSTORE_H
