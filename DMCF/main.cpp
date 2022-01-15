#include "mainwindow.h"
#include <QApplication>
#include "reg_window.h"
#include "auth_window.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    if(!w.connectDB())
        exit(1);
    //w.wipeDB()
    w.display();
    return a.exec();
}
