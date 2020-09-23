#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QSettings>

#include "app.h"
#include "testinfo.h"


int main(int argc, char *argv[])
{
    TestInit();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    auto result = a.exec();
    TestFree();
    return result;
}
