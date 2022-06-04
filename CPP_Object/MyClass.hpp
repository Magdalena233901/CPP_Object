#pragma once

class MyClass
{
	int variable = 42; //private by default
public:
	//deklaracje metod
	int getVariable(); //metoda getter - zwraca wartosc w obiekcie
	
	void setVariable(int param); //metoda setter, musi byc zachowany typ dla wszystkich tych obiektów - ustawia wartosc w obiekcie
};
