/********************************************************************************
** Form generated from reading UI file 'pantalla_jugador1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANTALLA_JUGADOR1_H
#define UI_PANTALLA_JUGADOR1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pantalla_jugador1
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *pantalla_jugador1)
    {
        if (pantalla_jugador1->objectName().isEmpty())
            pantalla_jugador1->setObjectName(QStringLiteral("pantalla_jugador1"));
        pantalla_jugador1->resize(755, 356);
        pantalla_jugador1->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(pantalla_jugador1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 671, 51));
        QFont font;
        font.setFamily(QStringLiteral("Century"));
        font.setPointSize(14);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label_2 = new QLabel(pantalla_jugador1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 120, 521, 61));
        label_2->setFont(font);
        pushButton = new QPushButton(pantalla_jugador1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 280, 101, 31));
        pushButton->setFont(font);

        retranslateUi(pantalla_jugador1);

        QMetaObject::connectSlotsByName(pantalla_jugador1);
    } // setupUi

    void retranslateUi(QWidget *pantalla_jugador1)
    {
        pantalla_jugador1->setWindowTitle(QApplication::translate("pantalla_jugador1", "Form", 0));
        label->setText(QApplication::translate("pantalla_jugador1", "Para el movimiento de su tanque tiene que utilizar las flechas de su teclado", 0));
        label_2->setText(QApplication::translate("pantalla_jugador1", "Para disparar tiene que apretar el boton \"D\" de su teclado", 0));
        pushButton->setText(QApplication::translate("pantalla_jugador1", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class pantalla_jugador1: public Ui_pantalla_jugador1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTALLA_JUGADOR1_H
