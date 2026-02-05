#include <iostream>
#include <QApplication>
#include <QMainWindow>


class MainWindow : public QMainWindow
{
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();

    return app.exec();
}