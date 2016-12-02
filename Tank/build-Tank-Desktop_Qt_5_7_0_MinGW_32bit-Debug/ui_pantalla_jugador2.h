/********************************************************************************
** Form generated from reading UI file 'pantalla_jugador2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANTALLA_JUGADOR2_H
#define UI_PANTALLA_JUGADOR2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pantalla_jugador2
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *pantalla_jugador2)
    {
        if (pantalla_jugador2->objectName().isEmpty())
            pantalla_jugador2->setObjectName(QStringLiteral("pantalla_jugador2"));
        pantalla_jugador2->resize(765, 355);
        label = new QLabel(pantalla_jugador2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 10, 291, 51));
        QFont font;
        font.setFamily(QStringLiteral("Century"));
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(pantalla_jugador2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 300, 81, 31));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(pantalla_jugador2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 300, 81, 31));

        retranslateUi(pantalla_jugador2);

        QMetaObject::connectSlotsByName(pantalla_jugador2);
    } // setupUi

    void retranslateUi(QWidget *pantalla_jugador2)
    {
        pantalla_jugador2->setWindowTitle(QApplication::translate("pantalla_jugador2", "Form", 0));
        label->setText(QApplication::translate("pantalla_jugador2", "Para jugar en modo 2 jugadores", 0));
        pushButton->setText(QApplication::translate("pantalla_jugador2", "Back", 0));
        pushButton_2->setText(QApplication::translate("pantalla_jugador2", "Jugar", 0));
    } // retranslateUi

};

namespace Ui {
    class pantalla_jugador2: public Ui_pantalla_jugador2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTALLA_JUGADOR2_H
