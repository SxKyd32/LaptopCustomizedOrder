//#include "mainwindow.h"
#include "user.h"

#include <QApplication>

string findid;
string usr;
string ty;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    User u;
    u.show();
    return a.exec();
}
