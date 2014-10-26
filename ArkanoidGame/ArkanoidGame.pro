#-------------------------------------------------
#
# Project created by QtCreator 2012-10-31T13:01:05
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = ArkanoidGame
TEMPLATE = app


SOURCES += main.cpp\
        ArkanoidGame.cpp \
    Vetor.cpp \
    Ball.cpp \
    Bar.cpp \
    Brick.cpp \
    ArkannoidView.cpp \
    Level.cpp \
    Utils.cpp \
    Game.cpp \
    Image.cpp \
    Texture.cpp \
    Scene.cpp \
    PowerUp.cpp \
    HighScoreWidget.cpp \
    About.cpp \
    HelpView.cpp \
    Help.cpp

HEADERS  += ArkanoidGame.h \
    Vetor.h \
    Ball.h \
    Bar.h \
    Brick.h \
    ArkanoidView.h \
    Level.h \
    Utils.h \
    Game.h \
    Image.h \
    Texture.h \
    Scene.h \
    PowerUp.h \
    HighScoreWidget.h \
    About.h \
    HelpView.h \
    Help.h

FORMS    += arkanoidgame.ui \
    highscorewidget.ui \
    about.ui \
    help.ui
LIBS += -lglut -lGLU
