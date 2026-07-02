#include <iostream> // esse include deve vir antes, do contrario da erro
#include "vetor2d.h"

void Vetor2D::setX(float x)
{
    this->x = x;
}

void Vetor2D::setY(float y)
{
    this->y = y;
}

void Vetor2D::set(float x, float y)
{
    this->x = x;
    this->y = y;
}

void Vetor2D::zero()
{
    x = 0;
    y = 0;
}

float Vetor2D::getX()
{
    return x;
}

float Vetor2D::getY()
{
    return y;
}

Vetor2D::Vetor2D()
{
    x = 0.0;
    y = 0.0;
}

Vetor2D::Vetor2D(float x, float y)
{
    this->x = x;
    this->y = y;
}

Vetor2D Vetor2D::operator+(Vetor2D v)
{
    Vetor2D temp;
    temp.x = x + v.x;
    temp.y = y + v.y;
    return temp;
}

Vetor2D Vetor2D::operator-(Vetor2D v)
{
    Vetor2D temp;
    temp.x = x - v.x;
    temp.y = y - v.y;
    return temp;
}

Vetor2D Vetor2D::operator*(float a)
{
    Vetor2D temp;
    temp.x = x * a;
    temp.y = y * a;
    return temp;
}

Vetor2D Vetor2D::operator/(float a)
{
    Vetor2D temp;
    temp.x = x / a;
    temp.y = y / a;
    return temp;
}

float Vetor2D::operator*(Vetor2D v)
{
    return x * v.x + y * v.y;
}

void Vetor2D::operator+=(Vetor2D v) {
    x += v.x;
    y += v.y;
}

void Vetor2D::operator-=(Vetor2D v) {
    x -= v.x;
    y -= v.y;
}

void Vetor2D::operator*=(float a) {
    x *= a;
    y *= a;
}

void Vetor2D::operator/=(float a) {
    x /= a;
    y /= a;
}

std::istream& operator>>(std::istream& is, Vetor2D& v)
{
    is >> v.x >> v.y;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Vetor2D& v)
{
  os << "(" << v.x << ", " << v.y << ")";
  return os;
}
