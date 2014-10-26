#ifndef BALL_H
#define BALL_H

#include "Vetor.h"
#define PI 3.1415926535898
#include <GL/glut.h>

/** @file
 * @author  Jean Silva <jeangleison2@gmail.com>, Caio Santos <caio-cesar-ms@hotmail.com>
 *
 * @section DESCRIPTION
 *
 * A classe Ball representa a Bola
 *
 *
 */
class Ball
{
public:
    Ball();
    /**
    * Construtor que configura um objeto da classe Ball dada uma posição (x, y), o raio e o vetor velocidade (a, b).
    *
    * @param posição (x, y), raio r, e o vetor velocidade (a, b).
    */
    Ball(double x, double y, double r, double a, double b);
    /**
    * Retorna o tipo da Bola
    *
    * @return 0 se Normal, 1 se Fogo, 2 se Ferro e 3  se FeFo - Ferro e Fogo
    */
    int getTipo();
    /**
    * Altera o tipo da Bola
    *
    * 0 - Normal, 1 - Fogo, 2 - Ferro e 3 - FeFo (Ferro e Fogo)
    */
    void setTipo(int tipo);
    /**
    * Aletera o raio da bola
    * @param novo tipo
    */
    void setR(double);
    /**
    * Retorna o raio da bola
    * @return Retorna o raio da bola
    */
    double getR();
    /**
    * Altera a posição da bola
    * @param x, y
    */
    void setPosicao(double, double);
    /**
    * Altera a posição da bola
    * @param Vetor v
    */
    void setPosicao(Vetor v);
    /**
    * Retorna a velocidade da bola
    * @return Vetor v
    */
    Vetor getVelocidade();
    /**
    * Retorna a posição da bola
    * @return Vetor p
    */
    Vetor getPosicao();
    /**
    * Altera a velocidade da bola
    * @param Vetor v
    */
    void setVelocidade(Vetor v);
    /**
    * Altera a velocidade da bola
    * @param x, y
    */
    void setVelocidade(double x, double y);
    void desenha();
    int tipo;//0 (Normal), 1 (Fogo), 2 (Ferro), e 3 (Ferro e Fogo)

private:
    double r;//raio
    Vetor posicao;
    Vetor velocidade;
};

#endif // BALL_H
