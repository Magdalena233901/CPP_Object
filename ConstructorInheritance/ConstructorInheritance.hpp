#pragma once

#pragma once
#include <iostream>
class TestA {
public:
	TestA()
	{
		std::cout << "Konstruktor bezparametrowy TestA" << std::endl;
	}
};

class TestB : public TestA {
public:
	TestB() : TestB(5)
	{
		std::cout << "Konstruktor bezparametrowy TestB" << std::endl;
	}

	//TestB(int i) : TestA() // konstruktor nadrzedny (bezparametrowy) wywoluje sie w sposob niejawny - implicite - nie trzeba go pisac
	TestB(int i)
	{
		std::cout << "Konstruktor parametrowy TestB" << std::endl;
	}
};

///////////////////////////////////////////////
class TestC {
public:
	TestC(int x)
	{
		std::cout << "Konstruktor parametrowy TestC" << std::endl;
	}
};

class TestD : public TestC {
public:
	//TestD() // konstruktor klasy TestC wywolywany jest niejawnie - kompilator szuka bezparamatrowej wersji ale jej nie znajduje
	TestD() : TestC(5) // wywolanie konstruktora nadrzednego w sposob jawny
	{
		std::cout << "Konstruktor bezparametrowy TestD" << std::endl;
	}

	//TestD(int x) // nawet jesli mamy zbieznosc sygnatur konstruktorow to kompilator sie nie polapie i trzeba jawnie wywolac konstruktor nadrzedny
	TestD(int x) : TestC(x)
	{

	}
};
