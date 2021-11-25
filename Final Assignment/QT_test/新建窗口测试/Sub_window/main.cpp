#include "subwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SubWindow w;
    w.show();

    return a.exec();
}
