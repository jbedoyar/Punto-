#ifndef ARREGLODEPUNTOS_H
#define ARREGLODEPUNTOS_H
#include "Punto.h"

class ArregloDePuntos
{
private:
    Punto *puntos;
    int tamano;
public:
    ArregloDePuntos();
    ArregloDePuntos(const Punto puntos[], const int tam);
    ArregloDePuntos(const ArregloDePuntos &o);
    ~ArregloDePuntos();
    void redimensionar(int n);
    void push_back(const Punto &p);
    void insert(const int posicion, const Punto &p);
    void remove(const int pos);
    int getSize() const;
    void clear();
};

#endif // ARREGLODEPUNTOS_H
