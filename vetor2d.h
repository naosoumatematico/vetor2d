#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2D
{
private:
    float x, y;

public:
    // getters e setters
    void setX(float x);
    void setY(float Y);
    void set(float x, float y);
    float getX();
    float getY();

    void zero();
    void print();

    // construtores
    // como nao ha alocacao dinamica de memoria, nao eh necessario implementar destrutor
    Vetor2D();
    Vetor2D(float x, float y);

    // sobrecarga de operadores
    // como nao ha alocacao dinamica de memoria, nao eh necessario sobrecarregar operator=
    Vetor2D operator+(Vetor2D v);
    Vetor2D operator-(Vetor2D v);
    Vetor2D operator*(float a);
    Vetor2D operator/(float a);
    float operator*(Vetor2D v);
    void operator+=(Vetor2D v);
    void operator-=(Vetor2D v);
    void operator*=(float a);
    void operator/=(float a);
};

#endif