#include "ctrwindow.h"
#include <QApplication>
#include <QTime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qsrand(static_cast<uint>(QTime(0,0,0).secsTo(QTime::currentTime())));
    CTRWindow w;
    w.show();

    return a.exec();
}
