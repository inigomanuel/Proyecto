#ifndef MATRIZ_JUEGO_JUGADOR2_H
#define MATRIZ_JUEGO_JUGADOR2_H

#include <QWidget>

namespace Ui {
class matriz_juego_jugador2;
}

class matriz_juego_jugador2 : public QWidget
{
    Q_OBJECT

public:
    explicit matriz_juego_jugador2(QWidget *parent = 0);
    ~matriz_juego_jugador2();
    void crear_ambiente();
    void keyPressEvent(QKeyEvent* evento);

private:
    Ui::matriz_juego_jugador2 *ui;
};

#endif // MATRIZ_JUEGO_JUGADOR2_H
