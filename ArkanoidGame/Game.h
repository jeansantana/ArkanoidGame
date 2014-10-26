#ifndef GAME_H
#define GAME_H

#include "Bar.h"
#include "Ball.h"
#include "Brick.h"
#include "Level.h"
#include <QGLWidget>
#include <QKeyEvent>
#include <QEvent>
#include "Texture.h"
#include "Scene.h"
#include <GL/glu.h>

/**
  *@enum KeyPressed inidica o estado da tecla pressionada {LEFT, RIGHT, PARADO}
  */

enum KeyPressed{
    LEFT, RIGHT, PARADO
};
/**
  *@enum StatusGame inidica o estado do jogo {PAUSE, PLAY, STOP, GAMEOVER, WIN}
  */
enum StatusGame{
    PAUSE, PLAY, STOP, GAMEOVER, WIN
};
/** @file
 * @author  Jean Silva <jeangleison2@gmail.com>, Caio Santos <caio-cesar-ms@hotmail.com>
 *
 * @section DESCRIPTION
 *
 * A classe Game é a classe que configura o jogo
 *
 *
 */
class Game
{

public:
    Game();
    /**
    * Construtor que configura um objeto da classe Game dado um nível a ser carregado, e o tamanho da matriz de tijolos,
    * Essa, matriz é carregada de arquivo.
    *
    * @param nível (level), e o tamanho da matriz (m, n)
    */
    Game(int level, int m, int n);
    Level levels;
    int score;
    int life;
    Bar bar;
    Ball ball;
    /**
    * Inicia o jogo
    *
    * @param nível (level), e o tamanho da matriz (m, n)
    */
    void inicia(int level, int m, int n);
    /**
    * Reseta o jogo
    *
    */
    void reset();
    /**
    * Carrega o próximo nível, para passar de fase
    *
    */
    void passarFase();
    KeyPressed keyPressed;
    StatusGame statusGame;
    int faseAtual;
};

#endif // GAME_H
