#include <iostream>
#include "Diamond.hpp"

int main()
{
	Tesla t; // jesli nie bêdzie s³ówka virtual to konstruktor i destruktor klasy car wywo³a siê podwójnie
	t.drive();  // jesli nie bêdzie s³ówka virtual to kompilator nie bêdzie wiedzia³ jak ta metodê wywo³aæ
}

