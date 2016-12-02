#ifndef PANTALLA_JUGADOR2_H
#define PANTALLA_JUGADOR2_H

#include <QWidget>

namespace Ui {
class pantalla_jugador2;
}

class pantalla_jugador2 : public QWidget
{
    Q_OBJECT

public:
    explicit pantalla_jugador2(QWidget *parent = 0);
    ~pantalla_jugador2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::pantalla_jugador2 *ui;
};

#endif // PANTALLA_JUGADOR2_H
