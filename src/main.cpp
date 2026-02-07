#include "MainWindow.h"

#include <QApplication>
#include <QMainWindow>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    gui::MainWindow w;
    w.show();

    return app.exec();
}
