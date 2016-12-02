/********************************************************************************
** Form generated from reading UI file 'matriz_juego_jugador2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIZ_JUEGO_JUGADOR2_H
#define UI_MATRIZ_JUEGO_JUGADOR2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_matriz_juego_jugador2
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *matriz_juego_jugador2)
    {
        if (matriz_juego_jugador2->objectName().isEmpty())
            matriz_juego_jugador2->setObjectName(QStringLiteral("matriz_juego_jugador2"));
        matriz_juego_jugador2->resize(760, 356);
        gridLayoutWidget = new QWidget(matriz_juego_jugador2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 741, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(matriz_juego_jugador2);

        QMetaObject::connectSlotsByName(matriz_juego_jugador2);
    } // setupUi

    void retranslateUi(QWidget *matriz_juego_jugador2)
    {
        matriz_juego_jugador2->setWindowTitle(QApplication::translate("matriz_juego_jugador2", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class matriz_juego_jugador2: public Ui_matriz_juego_jugador2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIZ_JUEGO_JUGADOR2_H
