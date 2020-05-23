#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    private:
    int x,y;
public:
    Punto();
    Punto(int x,int y);
    int getX() const;
    int getY() const;
    void setX(const int);
    void setY(const int);
};

#endif // PUNTO_H
