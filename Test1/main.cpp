#include <iostream>
#include <QApplication>
#include "mainwindow.h"

using namespace std;
int main(int argc, char *argv[])
{
    cout<<"hey"<<endl;

    QApplication a(argc, argv);
    MeGlwindow w;
    w.show();

    return a.exec();


}

