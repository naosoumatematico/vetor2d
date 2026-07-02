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
    void zero(); // seta para zero
    float getX();
    float getY();

    // construtores
    // como nao ha alocacao dinamica de memoria, nao eh necessario implementar destrutor
    Vetor2D();
    Vetor2D(float x, float y);

    // sobrecarga de operadores
    // como nao ha alocacao dinamica de memoria, nao eh necessario sobrecarregar operator=
    Vetor2D operator+(Vetor2D v); // soma entre vetores, componente a componente
    Vetor2D operator-(Vetor2D v); // subtracao entre vetores, componente a componente
    Vetor2D operator*(float a); // multiplicacao por escalar
    Vetor2D operator/(float a); // divisao por escalar
    float operator*(Vetor2D v); // produto escalar (entre 2 vetores)
    void operator+=(Vetor2D v);
    void operator-=(Vetor2D v);
    void operator*=(float a);
    void operator/=(float a);

    // sobrecarga de entrada e saida
    friend std::istream& operator>>(std::istream& is, Vetor2D& v);
    friend std::ostream& operator<<(std::ostream& os, const Vetor2D& v);
};

#endif