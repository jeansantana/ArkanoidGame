#include <QtGui/QApplication>
#include "ArkanoidGame.h"
#include <GL/glut.h>
#include <cstdlib>
#include <ctime>
int main(int argc, char *argv[])
{
    srand(time(NULL));
    glutInit(&argc, argv);
    QApplication a(argc, argv);
    ArkanoidGame w;
    w.show();
    return a.exec();
}
