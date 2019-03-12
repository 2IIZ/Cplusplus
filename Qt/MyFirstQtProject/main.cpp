#include "cadre.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cadre w;
    w.show();

    return a.exec();
}
