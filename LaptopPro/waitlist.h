#ifndef WAITLIST_H
#define WAITLIST_H

#include <QWidget>

namespace Ui {
class waitlist;
}

class waitlist : public QWidget
{
    Q_OBJECT

public:
    explicit waitlist(QWidget *parent = nullptr);
    ~waitlist();

private slots:

    void on_pushButton_clicked();

    void on_tableWidget_cellActivated(int row, int column);

private:
    Ui::waitlist *ui;
};

#endif // WAITLIST_H
