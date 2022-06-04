#include <iostream>
#include "MyClass.hpp"

	// akcesor (getter), który zwraca nam wartoœæ zmiennej variable
	// chowamy zmienna variable - OOP principle, ale metoda jest publiczna i daje dostêp do schowanej zmiennej
	int MyClass:: getVariable() //metoda getter - zwraca wartosc w obiekcie
	{
		return variable;
	}
	void MyClass:: setVariable(int param) //metoda setter, musi byc zachowany typ dla wszystkich tych obiektów - ustawia wartosc w obiekcie
	{
		variable = param; 
	}
