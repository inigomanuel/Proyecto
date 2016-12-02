#include "game.h"
#include <QApplication>
#include <QMediaPlayer>
#include "QGridLayout"
#include "QLabel"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game w;
    QMediaPlayer* Fondo;
    Fondo = new QMediaPlayer;
    Fondo->setMedia(QUrl::fromLocalFile("/Users/Iñigo/Desktop/Proyecto IPO/Tank/Tank/Nyan_Cat.mp3"));
    Fondo->play();
    w.show();
    return a.exec();
}
