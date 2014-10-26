#include "PowerUp.h"
#include <iostream>
using namespace std;
PowerUP::PowerUP(Vetor posicao, int tipo)
{
    this->posicao = posicao;
    this->tipo = tipo;
    cout << posicao.getX() << " " << posicao.getY() << endl;
    cout << tipo << endl;
    ativado = false;
}

PowerUP::PowerUP() {
    ativado = false;
}

int PowerUP::colidiu(Bar bar) {

    double dist = posicao.distanciaPontoAReta(Vetor (bar.getPosicao().getX() - bar.getComprimento()/2, bar.getPosicao().getY() + bar.getAltura()/2),
                                    Vetor (bar.getPosicao().getX() + bar.getComprimento()/2, bar.getPosicao().getY() + bar.getAltura()/2));

    if (dist <= 0.04) {
        return tipo;
    }
    return -1;

}


