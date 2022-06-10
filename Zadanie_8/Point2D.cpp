#include "Point2D.hpp"

//przypisanie do ltych zmiennych po dwukropku to, co jest w nawiasie
Point2D::Point2D(int px, int py) : x(px), y(py) //lista inicjalizujaca - tym sie zabezpieczmay przed smieciowymi wartosciami
{ //bedzie pusta
}

//konstruktor klasy Point3D 3- elementowy, ktory ustawia dwa elementy, a jak skonczy to ustawi nasz 
Point3D::Point3D(int ppx, int ppy, int ppz) : Point2D(ppx, ppy), z(ppz)
{
}