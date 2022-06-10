#include "inheritance.hpp"
#include <iostream>

int BaseClass::getX()
{
	return x;
}


int main() {
	BaseClass base;
	std::cout << base.getX() << " X From base class" << std::endl << std::endl;
	//base.getY() nie ma takiej metody w klasie bazowej!

	DerivedClass derived;
	std::cout << derived.getX() << " X From base class" << std::endl; //getX() jest z klasy bazowej
	std::cout << derived.getDerivedX() << " X From derived class" << std::endl; //getX() jest z klasy pochodnej
	std::cout << derived.getY() << " Y From derived class" << std::endl; //getY() jest z klasy pochodnej

	// base.hiddenForOutside; // brak dostepu do pol/metod protected
	// derived.hiddenForOutside; // brak dostepu
	std::cout << derived.getHiddenForOutside() << " hidden for outside" << std::endl;
	int& hidden = derived.getHiddenForOutside();
	hidden = 77;
	std::cout << derived.getHiddenForOutside() << " hidden for outside" << std::endl;
	return 0;
}

int DerivedClass::getY()
{
	int sum = getX();
	//int sum = y + z + getX() + hidden; // getter jest publiczny wiec dziala, hidden jest schowany
	//int sum = y + z + x + hidden; // zarowno x jak i hidden jest schowany (prywatny)
	return y + z;
}

int DerivedClass::getDerivedX()
{
	int sum = hiddenForOutside;
	return x;
}

int& DerivedClass::getHiddenForOutside() // ta metoda pozwoli na ? nieoczekiwany ? dostep do skladowej protected
{
	return hiddenForOutside;
}
