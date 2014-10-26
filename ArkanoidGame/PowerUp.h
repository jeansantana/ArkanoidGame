#ifndef POWERUP_H
#define POWERUP_H

#include "Vetor.h"
#include "Bar.h"
/**
  *@enum PowerUpTipos
  */
enum PowerUpTipos {EMPTY, PONTOEXTRA1, PONTOEXTRA2, AUMENTO, DMINUS, VIDA, FERRO, FOGO};
/** @file
 * @author  Jean Silva <jeangleison2@gmail.com>, Caio Santos <caio-cesar-ms@hotmail.com>
 *
 * @section DESCRIPTION
 *
 * A classe PowerUP são os bônus contidos nos tijolos, e que
 * são liberados quando o tijolo é atingido pela bola
 *
 *
 */

class PowerUP
{
public:
    /**
    * Construtor que configura um objeto da classe PowerUP
    *
    * @param posição (x, y), tipo
    */
    PowerUP(Vetor posicao, int tipo);
    PowerUP();
    int tipo;
    Vetor posicao;
    bool ativado;
    /**
    * Testa a colisão do item de bônus (powerup) com a Barra (Bar)
    *
    * @param Bar bar
    * @return tipo de PowerUP (PowerUpTipos) que colidiu com a Barra (Bar)
    */
    int colidiu(Bar bar);
private:

};

#endif // POWERUP_H
