#include "Brick.h"
#include <iostream>

using namespace std;

Brick::Brick() {

}

Brick::Brick(double x, double y, double altura, double comprimento, bool enable, int tipo) {
    this->tipo = (TijoloTipos)tipo;
    this->posicao = Vetor(x, y);
    this->enable = enable;
    this->altura = altura;
    this->comprimento = comprimento;
    int i = (rand() % 8);
    PowerUpTipos p = EMPTY;
    if (i == EMPTY) {
        p = EMPTY;
    } else if (i == PONTOEXTRA1) {
        p = PONTOEXTRA1;
    } else if (i == PONTOEXTRA2) {
        p = PONTOEXTRA2;
    } else if (i == AUMENTO) {
        p = AUMENTO;
    } else if (i == DMINUS) {
        p = DMINUS;
    } else if (i == VIDA) {
        p = VIDA;
    } else if (i == FERRO) {
        p = FERRO;
    } else if (i == FOGO) {
        p = FOGO;
    }

    powerUp = PowerUP();
    powerUp.tipo = p;
}

bool Brick::isEnable() {
    return this->enable;
}

void Brick::setEnable(bool e) {
    enable = e;
}

PowerUpTipos Brick::getPowerUp() {
    return (PowerUpTipos)this->powerUp.tipo;
}

void Brick::setPowerUP(PowerUpTipos pw) {
    this->powerUp.tipo = pw;
}

double Brick::getAltura() {
    return this->altura;
}

double Brick::getComprimento() {
    return this->comprimento;
}

void Brick::setComprimento(double largura) {
    this->comprimento = largura;
}

void Brick::setAltura(double altura) {
    this->altura = altura;
}

void Brick::setPosicao(double x, double y) {
    posicao.setX(x);
    posicao.setY(y);
}

void Brick::setPosicao(Vetor newPosition) {
    this->posicao = newPosition;
}

Vetor Brick::getPosicao() {
    return posicao;
}

void Brick::setTipo(int tipo) {
    this->tipo = (TijoloTipos) tipo;
}

TijoloTipos Brick::getTipo() {
    return tipo;
}

void Brick::desenha() {
    glPushMatrix();
    glBegin(GL_POLYGON);
    //preenche o quadrado
    glColor3f(1.0, 1.0, 0.0);
        glVertex3f(getPosicao().getX() - (comprimento/2.0), getPosicao().getY() + altura/2.0, 0.0);
        glVertex3f(getPosicao().getX() + (comprimento/2.0), getPosicao().getY() + altura/2.0, 0.0);
        glVertex3f(getPosicao().getX() + (comprimento/2.0), getPosicao().getY() - altura/2.0, 0.0);
        glVertex3f(getPosicao().getX() - (comprimento/2.0), getPosicao().getY() - altura/2.0, 0.0);
    glEnd();
    //desenha linhas para dividir os quadrados
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
        glVertex3f(getPosicao().getX() - (comprimento/2.0), getPosicao().getY() + altura/2.0, 0.0);
        glVertex3f(getPosicao().getX() + (comprimento/2.0), getPosicao().getY() + altura/2.0, 0.0);
        glVertex3f(getPosicao().getX() + (comprimento/2.0), getPosicao().getY() - altura/2.0, 0.0);
        glVertex3f(getPosicao().getX() - (comprimento/2.0), getPosicao().getY() - altura/2.0, 0.0);
    glEnd();
    //desenha o quadrado de dentro.
    double c = comprimento - 0.02;
    double a = altura - 0.02;

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.5);
        glVertex3f(getPosicao().getX() - (c/2.0), getPosicao().getY() + a/2.0, 0.0);
        glVertex3f(getPosicao().getX() + (c/2.0), getPosicao().getY() + a/2.0, 0.0);
        glVertex3f(getPosicao().getX() + (c/2.0), getPosicao().getY() - a/2.0, 0.0);
        glVertex3f(getPosicao().getX() - (c/2.0), getPosicao().getY() - a/2.0, 0.0);
    glEnd();
    glPopMatrix();

    glBegin(GL_LINE_LOOP);
    glColor3f(0, 0, 0);
        glVertex3f(getPosicao().getX() - (c/2.0), getPosicao().getY() + a/2.0, 0.0);
        glVertex3f(getPosicao().getX() + (c/2.0), getPosicao().getY() + a/2.0, 0.0);
        glVertex3f(getPosicao().getX() + (c/2.0), getPosicao().getY() - a/2.0, 0.0);
        glVertex3f(getPosicao().getX() - (c/2.0), getPosicao().getY() - a/2.0, 0.0);
    glEnd();
    glPopMatrix();
}

int Brick::colidiu(Ball *b) {

    Vetor vBall = b->getVelocidade();
    Vetor pBall = b->getPosicao();

    //se a distância entre o bloco e a bola for igual 0, colidiu!

    //colisão com a parte de baixo do bloco
    if (pBall.distanciaPontoAReta(Vetor (posicao.getX() - comprimento/2, posicao.getY() - altura/2),
                              Vetor (posicao.getX() + comprimento/2, posicao.getY() - altura/2)) <= b->getR()) {
        //bola de ferro ou normal
        if (b->getTipo() == 0 || b->getTipo() == 1 || tipo == TFIXO) b->setVelocidade(vBall.getX(), -fabs(vBall.getY()));
        //else é ferro e passa direto, mas colide com a parede fixa, teste tipo == TFIXO acima

        if (tipo != TFIXO && tipo != TPLUS) {
            setEnable(false);
            return 0;//o bloc é normal
        } else if (tipo == TPLUS) {
            tipo = TNORMAL;
            return 1;//o bloco é plus
        }
        return 2;//o bloco é Fixo
    //colisão com o lado esquerdo do bloco
    } else if (pBall.distanciaPontoAReta(Vetor (posicao.getX() - comprimento/2, posicao.getY() - altura/2),
                                         Vetor (posicao.getX() - comprimento/2, posicao.getY() + altura/2)) <= b->getR()) {
        if (b->getTipo() == 0 || b->getTipo() == 1 || tipo == TFIXO) b->setVelocidade(-fabs(vBall.getX()), vBall.getY());
        if (tipo != TFIXO && tipo != TPLUS) {
            setEnable(false);
            return 0;//o bloc é normal
        } else if (tipo == TPLUS) {
            tipo = TNORMAL;
            return 1;//o bloco é plus
        }
        return 2;//o bloco é Fixo
    //colisão com o parte de cima
    } else if (pBall.distanciaPontoAReta(Vetor (posicao.getX() - comprimento/2, posicao.getY() + altura/2),
                                         Vetor (posicao.getX() + comprimento/2, posicao.getY() + altura/2)) <= b->getR()) {
        if (b->getTipo() == 0 || b->getTipo() == 1 || tipo == TFIXO) b->setVelocidade(vBall.getX(), fabs(vBall.getY()));
        if (tipo != TFIXO && tipo != TPLUS) {
            setEnable(false);
            return 0;//o bloc é normal
        } else if (tipo == TPLUS) {
            tipo = TNORMAL;
            return 1;//o bloco é plus
        }
        return 2;//o bloco é Fixo
    //colisão com o lado diretiro
    } else if (pBall.distanciaPontoAReta(Vetor (posicao.getX() + comprimento/2, posicao.getY() + altura/2),
                                         Vetor (posicao.getX() + comprimento/2, posicao.getY() - altura/2)) <= b->getR()) {
        if (b->getTipo() == 0 || b->getTipo() == 1 || tipo == TFIXO) b->setVelocidade(fabs(vBall.getX()), vBall.getY());
        if (tipo != TFIXO && tipo != TPLUS) {
            setEnable(false);
            return 0;//o bloc é normal
        } else if (tipo == TPLUS) {
            tipo = TNORMAL;
            return 1;//o bloco é plus
        }
        return 2;//o bloco é Fixo
    }
    return -1;//não houve colisão
}
