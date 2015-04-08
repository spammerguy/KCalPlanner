#include "mnwin.h"
#include <QApplication>

int main (int argc, char *argv[]) {
    QApplication a(argc, argv);
    MnWin w;
    w.show();

    return a.exec();
}
