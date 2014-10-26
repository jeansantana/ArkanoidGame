#include "Ball.h"
#include "GL/glu.h"

Ball::Ball() {

}

Ball::Ball(double x, double y, double r, double a, double b) {
    this->r = r;
    this->velocidade = velocidade;
    this->posicao = Vetor(x, y);
    this->velocidade = Vetor (a, b);
    tipo = 0;
}

int Ball::getTipo() {
    return tipo;
}

void Ball::setTipo(int tipo) {
    this->tipo = tipo;
}

double Ball::getR() {
    return this->r;
}

void Ball::setR(double r) {
    this->r = r;
}

Vetor Ball::getVelocidade() {
    return velocidade;
}

void Ball::setVelocidade(Vetor newVelocidade) {
    this->velocidade = newVelocidade;
}

void Ball::setVelocidade(double x, double y) {
    this->velocidade.setX(x);
    this->velocidade.setY(y);
}

void Ball::desenha() {

    GLfloat circle_points = 100.0f;
    GLfloat angle, raio = r;
    glBegin(GL_POLYGON);
        for (int i = 0; i < circle_points; i++) {
            angle = 2 * PI * i / circle_points;
            glVertex3f(cos(angle) * raio, sin(angle) * raio, 0.0);
        }
    glEnd();
}

void Ball::setPosicao(double x, double y) {
    posicao.setX(x);
    posicao.setY(y);
}

void Ball::setPosicao(Vetor newPosition) {
    this->posicao = newPosition;
}

Vetor Ball::getPosicao() {
    return posicao;
}
