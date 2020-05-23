#include "ArregloDePuntos.h"

ArregloDePuntos::ArregloDePuntos()
{

}
ArregloDePuntos::ArregloDePuntos(const Punto puntos[], const int tam)
{
    tamano = tam;
    puntos = new Punto[tam];
    for(int i= 0; i < tam; i++)
    {
        this->puntos[i] = puntos[i];
    }
}
ArregloDePuntos::ArregloDePuntos(const ArregloDePuntos &o)
{
    tamano = o.tamano;
    puntos = new Punto[tamano];
    for(int i = 0; i < tamano; i++)
    {
        puntos[i] = o.puntos[i];
    }
}
ArregloDePuntos::~ArregloDePuntos()
{
    delete[] puntos;
}
void ArregloDePuntos::redimensionar(int n)
{
    Punto *pts = new Punto[n];
    int mintamano = n > tamano ? tamano : n;
    for(int i = 0; i <mintamano; i++)
    {
        pts[i] = puntos[i];
    }
    delete[] puntos;
    tamano = n;
    puntos = pts;
}
void ArregloDePuntos::push_back(const Punto &p)
{
    redimensionar(tamano + 1);
    puntos[tamano-1] = p;
}
void ArregloDePuntos::insert(const int pos, const Punto &p)
{
    redimensionar(tamano+1);
    for ( int i = tamano - 1; i > pos ; i--) {
        puntos[i] = puntos[i-1];
    }
    puntos[pos] = p;
}
void ArregloDePuntos::remove(const int pos)
{
    if ( pos >= 0 && pos < tamano) {
        for ( int i = pos ; i < tamano - 2; i ++) {
            puntos[i] = puntos[i+1];
        }
        redimensionar(tamano-1) ;
    }
}
int ArregloDePuntos::getSize() const
{
    return tamano;
}
void ArregloDePuntos::clear()
{
    redimensionar(0);
}
