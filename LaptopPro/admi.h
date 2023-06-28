#ifndef ADMI_H
#define ADMI_H

#include <QDialog>

using namespace std;

namespace Ui {
class Admi;
}

class Admi : public QDialog
{
    Q_OBJECT

public:
    explicit Admi(QWidget *parent = nullptr);
    ~Admi();
    int Login(string ID,string PW);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Admi *ui;
};

#endif // ADMI_H
