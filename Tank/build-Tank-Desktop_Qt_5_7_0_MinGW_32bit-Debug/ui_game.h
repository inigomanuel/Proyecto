/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QStringLiteral("Game"));
        Game->resize(796, 480);
        centralWidget = new QWidget(Game);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 791, 431));
        label->setStyleSheet(QStringLiteral("border-image: url(:/Inicio.jpg);"));
        label->setPixmap(QPixmap(QString::fromUtf8("Inicio.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 200, 561, 201));
        QFont font;
        font.setFamily(QStringLiteral("Imprint MT Shadow"));
        font.setPointSize(72);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setFocusPolicy(Qt::NoFocus);
        label_2->setContextMenuPolicy(Qt::NoContextMenu);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setScaledContents(false);
        label_2->setWordWrap(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 350, 141, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Engravers MT"));
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setAutoFillBackground(true);
        pushButton->setStyleSheet(QStringLiteral("border-left-color: rgb(39, 39, 39);"));
        Game->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Game);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 796, 21));
        Game->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Game);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Game->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Game);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Game->setStatusBar(statusBar);

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QMainWindow *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Game", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("Game", " TANK ULTIMATE", 0));
        pushButton->setText(QApplication::translate("Game", "START", 0));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
