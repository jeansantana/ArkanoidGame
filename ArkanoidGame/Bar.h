#ifndef BAR_H
#define BAR_H

#include "Vetor.h"
#include <GL/glu.h>

/** @file
 * @author  Jean Silva <jeangleison2@gmail.com>, Caio Santos <caio-cesar-ms@hotmail.com>
 *
 * @section DESCRIPTION
 *
 * A classe Bar representa um Barra
 *
 *
 */


class Bar
{

public:
    /**
    * Construtor que configura um objeto da classe Bar dada uma posição, um comprimento e uma altura.
    *
    * @param posição (x, y), comprimento, e altura.
    */
    Bar(double x, double y, double comprimento, double altura);
    Bar();
    /**
    * Retorna o comprimento da Barra
    *
    * @return comprimento
    */
    double getComprimento();
    /**
    * Aletera o comprimento da Barra
    * @param comprimento
    */
    void setComprimento(double comprimento);
    /**
    * Retorna o altura da Barra
    *
    * @return altura
    */
    double getAltura();
    /**
    * Aletera a altura da Barra
    * @param altura
    */
    void setAltura(double altura);
    /**
    * Retorna a posição da Barra
    *
    * @return Vetor p
    */
    Vetor getPosicao();
    /**
    * Aletera a posição da Barra
    * @param Vetor p
    */
    void setPosicao(Vetor novaPosicao);
    /**
    * Aletera a posição da Barra
    * @param x, y
    */
    void setPosicao(double x, double y);
    void desenha();

private:
    double comprimento;
    Vetor posicao;
    double altura;
};

#endif // BAR_H
