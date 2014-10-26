#ifndef VETOR_H
#define VETOR_H

#include <cmath>

/** @file
 * @author  Jean Silva <jeangleison2@gmail.com>, Caio Santos <caio-cesar-ms@hotmail.com>
 *
 * @section DESCRIPTION
 *
 * A classe Vetor implementa operações entre vetores
 *
 *
 */


class Vetor
{
public:
    Vetor();
    /**
     * Construtor que cria um vetor de coordenadas x, y
     * @param x, y
     *
     */
    Vetor(double x, double y);
    /**
     * Soma dois Vetores
     * @return Vetor c
     */
    Vetor operator +(Vetor);
    /**
     * Subtrai dois Vetores
     * @return Vetor c
     */
    Vetor operator -(Vetor);
    /**
     * multiplica dois Vetores
     * @return Vetor c
     */
    Vetor operator *(double);
    /**
     * multiplicação de um escalar por um Vetor
     * @return Vetor v
     */
    double operator *(Vetor);
    /**
     * Atribuição
     */
    void operator = (Vetor);
    /**
     * Testa se dois vetores são iguais
     * @return true or false
     */
    bool operator ==(Vetor);
    /**
     * Retorna a coordenada x do Vetor
     * @return double x
     */
    double getX();
    /**
     * Retorna a coordenada y do Vetor
     * @return double y
     */
    double getY();
    /**
     * Altera a coordenada y do Vetor
     * @param double y
     */
    void setY(double);
    /**
     * Altera a coordenada x do Vetor
     * @param double x
     */
    void setX(double);
    /**
     * Retorna a norma
     * @return double norma
     */
    double getNorma();
    /**
     * Retorna o vetor Unitário
     * @return Vetor i
     */
    Vetor getVetorUnitario();
    /**
     * Calcula a distâcia do ponto x, y, à reta {a (x, y), b(x, y)}
     * @return double x
     */
    double distanciaPontoAReta(Vetor a, Vetor b);

private:
    double x;
    double y;
    double norma;
};

#endif // VETOR_H
