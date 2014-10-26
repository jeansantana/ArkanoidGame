#ifndef BRICK_H
#define BRICK_H

#include "Vetor.h"
#include "Ball.h"
#include "PowerUp.h"
/**
 * @enum TijolosTipos
 * TNORMAL = 0, TPLUS = 1, TFIXO = 2
 */
enum TijoloTipos {TNORMAL = 0, TPLUS = 1, TFIXO = 2};

/** @file
 * @author  Jean Silva <jeangleison2@gmail.com>, Caio Santos <caio-cesar-ms@hotmail.com>
 *
 * @section DESCRIPTION
 *
 * A classe Brick representa um Tijolo
 *
 *
 */

class Brick
{
public:
    /**
    * Construtor que configura um objeto da classe Brick dada uma posição (x, y), altura, comprimento, um booleano para informar
    *se o tijolo está habilitado ou não, e um valor inteiro para o tipo do bloco.
    *
    * @param posição (x, y), altura, comprimento, enable, tipo
    */
    Brick(double x, double y, double altura, double comprimento, bool enable, int tipo);
    Brick();
    PowerUP powerUp;
private:
    double comprimento;
    double altura;
    Vetor posicao;
    bool enable;
    //PowerUpTipos pw;
    TijoloTipos tipo;

public:
    /**
    * Retorna true se está habilitado e false caso contrário
    *
    * @return true or false
    */
    bool isEnable();
    void setEnable(bool e);
    /**
    * Retorna o powerup do tijolo
    *
    * @return PowerUpTipos
    */
    PowerUpTipos getPowerUp();
    void setPowerUP(PowerUpTipos pw);
    /**
    * Retorna a altura do Tijolo
    *
    * @return altura
    */
    double getAltura();
    /**
    * Retorna a comprimento do Tijolo
    *
    * @return comprimento
    */
    double getComprimento();
    /**
    * Altera a comprimento do Tijolo
    *
    * @param comprimento
    */
    void setComprimento(double comprimento);
    /**
    * Altera a altura do Tijolo
    *
    * @param altura
    */
    void setAltura(double altura);
    /**
    * Teste se o Tijolo (Brick) colidiu com a Bola (Ball)
    * @return o tipo do tijolo que colidiu {TNORMAL = 0, TPLUS = 1, TFIXO = 2};
    * @param Ball *p
    */
    int colidiu(Ball *b);
    /**
    * Altera a posição do Tijolo
    *
    * @param x, y
    */
    void setPosicao(double x, double y);
    /**
    * Altera a posição do Tijolo
    *
    * @param Vetor v
    */
    void setPosicao(Vetor);
    /**
    * Retorna a posição do Tijolo
    *
    * @return Vetor p
    */
    Vetor getPosicao();
    void desenha();
    /**
    * Altera o tipo do Tijolo
    *
    * @param novo tipo
    */
    void setTipo(int tipo);
    /**
    * Retorna o tipo do tijolo
    *
    * @return TijoloTipos
    */
    TijoloTipos getTipo();

};

#endif //BRICK_H
