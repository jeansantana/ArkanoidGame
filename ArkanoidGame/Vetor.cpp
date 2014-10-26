#include "Vetor.h"

Vetor::Vetor()
{
    this->x = 0;
    this->y = 0;
    this->norma = 0;
}

void Vetor::operator =(Vetor v) {
    this->x = v.getX();
    this->y = v.getY();
}

Vetor::Vetor(double x, double y)
{
    this->x = x;
    this->y = y;
    this->norma = sqrt(x*x + y*y);
}

Vetor Vetor::operator +(Vetor v)
{
    double a, b;
    a = this->x + v.x;
    b = this->y + v.y;
    return Vetor(a, b);
}

Vetor Vetor::operator -(Vetor v)
{
    double a, b;
    a = this->x - v.x;
    b = this->y - v.y;
    return Vetor(a, b);
}

Vetor Vetor::operator *(double k)
{
    double a, b;
    a = k * this->x;
    b = k * this->y;
    return Vetor(a, b);
}

double Vetor::operator *(Vetor v)
{
    return ((this->x * v.x) + (this->y * v.y));
}

bool Vetor::operator ==(Vetor v)
{
    if(this->x == v.x && this->y == v.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double Vetor::getX() {
    return this->x;
}

double Vetor::getY() {
    return this->y;
}

void Vetor::setY(double y) {
    this->y = y;
}

void Vetor::setX(double x) {
    this->x = x;
}

double Vetor::getNorma() {
    this->norma = sqrt(x*x + y*y);
    return this->norma;
}

Vetor Vetor::getVetorUnitario() {
    Vetor v;
    v.x = this->x/norma;
    v.y = this->y/norma;
    v.norma = 1;
    return v;
}

double Vetor::distanciaPontoAReta(Vetor a, Vetor b) {
    double dx = a.getX() - b.getX();
    double dy = a.getY() - b.getY();
    double t = ((x * dx + y * dy) - (b.getX() * dx + b.getY() * dy)) / (dx*dx + dy*dy);
    Vetor g, q;
    if(t < 0.0)t = 0.0; // para segmento
    if(t > 1.0)t = 1.0; // para segmento
    g.setX(dx * t + b.getX());
    g.setY(dy * t + b.getY());

    q.setX(g.getX() - x);
    q.setY(g.getY() - y);
    return q.getNorma();
}
