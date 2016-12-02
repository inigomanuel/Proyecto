#include "pantalla_jugador2.h"
#include "ui_pantalla_jugador2.h"
#include "instrucciones.h"
#include "matriz_juego_jugador2.h"

pantalla_jugador2::pantalla_jugador2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pantalla_jugador2)
{
    ui->setupUi(this);
}

pantalla_jugador2::~pantalla_jugador2()
{
    delete ui;
}

void pantalla_jugador2::on_pushButton_clicked()
{
    Instrucciones *inst=new Instrucciones();
    inst->show();
    this->hide();
}

void pantalla_jugador2::on_pushButton_2_clicked()
{
    matriz_juego_jugador2 *inst=new matriz_juego_jugador2();
    inst->show();
    this->hide();
}
