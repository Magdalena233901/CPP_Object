#include <iostream>
#include "Diamond.hpp"

int main()
{
	Tesla t; // jesli nie b�dzie s��wka virtual to konstruktor i destruktor klasy car wywo�a si� podw�jnie
	t.drive();  // jesli nie b�dzie s��wka virtual to kompilator nie b�dzie wiedzia� jak ta metod� wywo�a�
}

