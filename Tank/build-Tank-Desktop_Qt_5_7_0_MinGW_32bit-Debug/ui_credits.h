/********************************************************************************
** Form generated from reading UI file 'credits.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITS_H
#define UI_CREDITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_credits
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QWidget *credits)
    {
        if (credits->objectName().isEmpty())
            credits->setObjectName(QStringLiteral("credits"));
        credits->resize(763, 349);
        label = new QLabel(credits);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 10, 161, 81));
        QFont font;
        font.setFamily(QStringLiteral("Century"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(credits);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 80, 311, 71));
        label_2->setFont(font);
        label_3 = new QLabel(credits);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 160, 81, 61));
        label_3->setFont(font);
        label_4 = new QLabel(credits);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 230, 461, 41));
        label_4->setFont(font);
        pushButton = new QPushButton(credits);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 300, 75, 23));

        retranslateUi(credits);

        QMetaObject::connectSlotsByName(credits);
    } // setupUi

    void retranslateUi(QWidget *credits)
    {
        credits->setWindowTitle(QApplication::translate("credits", "Form", 0));
        label->setText(QApplication::translate("credits", "Cr\303\251ditos", 0));
        label_2->setText(QApplication::translate("credits", "Bryan Ojeda e I\303\261igo Diez Canseco", 0));
        label_3->setText(QApplication::translate("credits", "Curso", 0));
        label_4->setText(QApplication::translate("credits", "Introducci\303\263n a la Programacion Orientada a Objetos", 0));
        pushButton->setText(QApplication::translate("credits", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class credits: public Ui_credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITS_H
