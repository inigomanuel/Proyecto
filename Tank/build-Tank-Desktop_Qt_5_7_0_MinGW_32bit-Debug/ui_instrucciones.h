/********************************************************************************
** Form generated from reading UI file 'instrucciones.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCCIONES_H
#define UI_INSTRUCCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instrucciones
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Instrucciones)
    {
        if (Instrucciones->objectName().isEmpty())
            Instrucciones->setObjectName(QStringLiteral("Instrucciones"));
        Instrucciones->resize(753, 341);
        label = new QLabel(Instrucciones);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 130, 471, 91));
        QFont font;
        font.setFamily(QStringLiteral("Charlemagne Std"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(Instrucciones);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 20, 211, 141));
        pushButton_2 = new QPushButton(Instrucciones);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 180, 211, 141));
        pushButton_3 = new QPushButton(Instrucciones);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 280, 81, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century"));
        font1.setPointSize(14);
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(Instrucciones);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 280, 81, 31));
        pushButton_4->setFont(font1);

        retranslateUi(Instrucciones);

        QMetaObject::connectSlotsByName(Instrucciones);
    } // setupUi

    void retranslateUi(QWidget *Instrucciones)
    {
        Instrucciones->setWindowTitle(QApplication::translate("Instrucciones", "Form", 0));
        label->setText(QApplication::translate("Instrucciones", "Instrucciones", 0));
        pushButton->setText(QApplication::translate("Instrucciones", "1 JUGADOR", 0));
        pushButton_2->setText(QApplication::translate("Instrucciones", "2 JUGADORES", 0));
        pushButton_3->setText(QApplication::translate("Instrucciones", "Back", 0));
        pushButton_4->setText(QApplication::translate("Instrucciones", "Credits", 0));
    } // retranslateUi

};

namespace Ui {
    class Instrucciones: public Ui_Instrucciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCCIONES_H
