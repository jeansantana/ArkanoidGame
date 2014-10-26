#include "Bar.h"

Bar::Bar(double x, double y, double comprimento, double altura) {

    this->comprimento = comprimento;
    this->posicao = Vetor(x, y);
    this->altura = altura;
}

Bar::Bar() {

}

double Bar::getComprimento() {
    return this->comprimento;
}

void Bar::setComprimento(double comprimento) {
    this->comprimento = comprimento;
}

double Bar::getAltura() {
    return altura;
}

void Bar::setAltura(double altura) {
    this->altura = altura;
}

Vetor Bar::getPosicao() {
    return posicao;
}

void Bar::setPosicao(Vetor novaPosicao) {
    posicao = novaPosicao;
}

void Bar::setPosicao(double x, double y) {
    posicao.setX(x);
    posicao.setY(y);
}

void Bar::desenha() {
    glPushMatrix();
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
        glVertex3f(-(comprimento/2), posicao.getY()  + altura, 0);
        glVertex3f((comprimento/2), posicao.getY() + altura, 0);
        glVertex3f((comprimento/2), posicao.getY(), 0);
        glVertex3f(-(comprimento/2), posicao.getY(), 0);
    glEnd();
    glPopMatrix();
}


