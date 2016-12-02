#include "matriz_juego_jugador2.h"
#include "ui_matriz_juego_jugador2.h"
#include "QLabel"
#include <QKeyEvent>

QGridLayout* ambiente;
QVector<QVector <QWidget*>> matriz;
int pos_xj1 = 0;
int pos_yj1 = 0;

int pos_xj2 = 10;
int pos_yj2 = 10;

matriz_juego_jugador2::matriz_juego_jugador2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::matriz_juego_jugador2)
{
    ui->setupUi(this);
    crear_ambiente();
}

matriz_juego_jugador2::~matriz_juego_jugador2()
{
    delete ui;
}

void matriz_juego_jugador2::crear_ambiente()
{
    ambiente = new QGridLayout(this);
    int i,j;
    for(i=0; i!=11; i++){
        QVector <QWidget*> lista;
        for(j=0; j!=11; j++){
            QLabel* mapa;
            mapa= new QLabel;
            if(i==0 && j==0)
                mapa -> setStyleSheet("background-color : Gray");
               else if((i==10)&&(j==10))
                mapa -> setPixmap(QPixmap("/Users/Iñigo/Desktop/Proyecto IPO/Tank/Tank/ladrillo_fragil.png"));
            else if(((i+1)%2==0)&&((j+1)%2==0))
                mapa -> setPixmap(QPixmap("/Users/Iñigo/Desktop/Proyecto IPO/Tank/Tank/ladrillo_rigido.png"));
            else
                mapa -> setStyleSheet("background-color : Brown");
            mapa->setMaximumHeight(80);
            mapa->setMaximumWidth(100);
            mapa->setScaledContents(true);
            ambiente->addWidget(mapa,i,j);
            lista.push_back(mapa);
        }
        matriz.push_back(lista);
    }
    ambiente->setSpacing(10);
    ui->gridLayout->addLayout(ambiente,0,0);
}

void matriz_juego_jugador2::keyPressEvent(QKeyEvent* event)
{
    if(event->key() == Qt::Key_A){
        if (pos_yj1 != 0){
            if(!(((pos_xj1+1)%2==0)&&((pos_yj1)%2==0))){
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Green");
                --pos_yj1;
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Black");
            }
        }
    }
    if(event->key() == Qt::Key_D){
        if (pos_yj1 != 10){
            if(!(((pos_xj1+1)%2==0)&&((pos_yj1)%2==0))){
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Green");
                ++pos_yj1;
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Black");
            }
        }
    }
    if(event->key() == Qt::Key_W){
        if (pos_xj1 != 0){
            if(!(((pos_xj1)%2==0)&&((pos_yj1+1)%2==0))){
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Green");
                --pos_xj1;
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Black");
            }
        }
    }
    if(event->key() == Qt::Key_S){
        if (pos_xj1 != 10){
            if(!(((pos_xj1)%2==0)&&((pos_yj1+1)%2==0))){
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Green");
                ++pos_xj1;
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Black");
            }
        }
    }
    /*##############################################################################################################*/

    if(event->key() == Qt::Key_Left){
        if (pos_yj2 != 0){
            if(!(((pos_xj2+1)%2==0)&&((pos_yj2)%2==0))){
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Green");
                --pos_yj2;
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Red");
            }
        }
    }
    if(event->key() == Qt::Key_Right){
        if (pos_yj2 != 10){
            if(!(((pos_xj2+1)%2==0)&&((pos_yj2)%2==0))){
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Green");
                ++pos_yj2;
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Red");
            }
        }
    }
    if(event->key() == Qt::Key_Up){
        if (pos_xj2 != 0){
            if(!(((pos_xj2)%2==0)&&((pos_yj2+1)%2==0))){
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Green");
                --pos_xj2;
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Red");
            }
        }
    }
    if(event->key() == Qt::Key_Down){
        if (pos_xj2 != 10){
            if(!(((pos_xj2)%2==0)&&((pos_yj2+1)%2==0))){
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Green");
                ++pos_xj2;
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Red");
            }
        }
    }
}
