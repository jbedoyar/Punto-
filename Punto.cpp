#include "Punto.h"

Punto::Punto()
{

}
Punto::Punto(int x, int y)
{
    this->x=x;
    this->y=y;
}
int Punto::getX() const
{
    return x;
}
int Punto::getY() const
{
    return y;
}
void Punto::setX(const int nuevo_x)
{
    x = nuevo_x;
}
void Punto::setY(const int nuevo_y)
{
    y = nuevo_y;
}
