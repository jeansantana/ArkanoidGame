/********************************************************************************
** Form generated from reading UI file 'arkanoidgame.ui'
**
** Created: Fri Nov 9 00:27:16 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARKANOIDGAME_H
#define UI_ARKANOIDGAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>
#include "ArkanoidView.h"

QT_BEGIN_NAMESPACE

class Ui_ArkanoidGame
{
public:
    QAction *actionNovo_jogo;
    QAction *actionHigh_Scores;
    QAction *actionQuit;
    QAction *actionInstru_es;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    ArkanoidView *widget;
    QMenuBar *menuBar;
    QMenu *menuGame;
    QMenu *menuHelp;

    void setupUi(QMainWindow *ArkanoidGame)
    {
        if (ArkanoidGame->objectName().isEmpty())
            ArkanoidGame->setObjectName(QString::fromUtf8("ArkanoidGame"));
        ArkanoidGame->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ArkanoidGame->sizePolicy().hasHeightForWidth());
        ArkanoidGame->setSizePolicy(sizePolicy);
        ArkanoidGame->setMinimumSize(QSize(800, 600));
        ArkanoidGame->setMaximumSize(QSize(800, 600));
        actionNovo_jogo = new QAction(ArkanoidGame);
        actionNovo_jogo->setObjectName(QString::fromUtf8("actionNovo_jogo"));
        actionHigh_Scores = new QAction(ArkanoidGame);
        actionHigh_Scores->setObjectName(QString::fromUtf8("actionHigh_Scores"));
        actionQuit = new QAction(ArkanoidGame);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionInstru_es = new QAction(ArkanoidGame);
        actionInstru_es->setObjectName(QString::fromUtf8("actionInstru_es"));
        actionAbout = new QAction(ArkanoidGame);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(ArkanoidGame);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new ArkanoidView(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        ArkanoidGame->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ArkanoidGame);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        menuGame = new QMenu(menuBar);
        menuGame->setObjectName(QString::fromUtf8("menuGame"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        ArkanoidGame->setMenuBar(menuBar);

        menuBar->addAction(menuGame->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuGame->addAction(actionNovo_jogo);
        menuGame->addAction(actionHigh_Scores);
        menuGame->addAction(actionQuit);
        menuHelp->addAction(actionInstru_es);
        menuHelp->addAction(actionAbout);

        retranslateUi(ArkanoidGame);

        QMetaObject::connectSlotsByName(ArkanoidGame);
    } // setupUi

    void retranslateUi(QMainWindow *ArkanoidGame)
    {
        ArkanoidGame->setWindowTitle(QApplication::translate("ArkanoidGame", "Arkanoid Game", 0, QApplication::UnicodeUTF8));
        actionNovo_jogo->setText(QApplication::translate("ArkanoidGame", "Novo jogo", 0, QApplication::UnicodeUTF8));
        actionNovo_jogo->setShortcut(QApplication::translate("ArkanoidGame", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionHigh_Scores->setText(QApplication::translate("ArkanoidGame", "High Scores", 0, QApplication::UnicodeUTF8));
        actionHigh_Scores->setShortcut(QApplication::translate("ArkanoidGame", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("ArkanoidGame", "Sair", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("ArkanoidGame", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionInstru_es->setText(QApplication::translate("ArkanoidGame", "Instru\303\247\303\265es", 0, QApplication::UnicodeUTF8));
        actionInstru_es->setShortcut(QApplication::translate("ArkanoidGame", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("ArkanoidGame", "About", 0, QApplication::UnicodeUTF8));
        actionAbout->setShortcut(QApplication::translate("ArkanoidGame", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        menuGame->setTitle(QApplication::translate("ArkanoidGame", "Game", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("ArkanoidGame", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ArkanoidGame: public Ui_ArkanoidGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARKANOIDGAME_H
