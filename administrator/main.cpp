#include "adminiwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    adminiwindow *w=new adminiwindow();
    w->show();
    return a.exec();
}
