#include <iostream>
#include "MyClass.hpp"

	// akcesor (getter), kt�ry zwraca nam warto�� zmiennej variable
	// chowamy zmienna variable - OOP principle, ale metoda jest publiczna i daje dost�p do schowanej zmiennej
	int MyClass:: getVariable() //metoda getter - zwraca wartosc w obiekcie
	{
		return variable;
	}
	void MyClass:: setVariable(int param) //metoda setter, musi byc zachowany typ dla wszystkich tych obiekt�w - ustawia wartosc w obiekcie
	{
		variable = param; 
	}
