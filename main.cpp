#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QSettings>

#include "app.h"
#include "testinfo.h"
#include "savelog.h"


int main(int argc, char *argv[])
{
    TestInit();

    QApplication a(argc, argv);

    App::ReadConfig();
    
    SaveLog::instance()->start();
    
    MainWindow w;
    w.show();

    auto result = a.exec();
    
    TestFree();
    return result;
}
