#pragma once
#include <iostream>

class Dish
{
protected:
	int kcal;
public:
	Dish(int _kcal) : kcal(_kcal) {};
	virtual void eat()
	{
		//nie wywolamy tej metody dopoki nie utworzymy obiektu typu Dish
		//kcal -= 10;
		//std::cout << "Jem danie (ogolne)" << std::endl;
	}
	//int& getKcal() {
	int getKcal() {
		return kcal;
	}
};

class Soup : public Dish
{
public:
	Soup(int _kcal) : Dish(_kcal) { }
	// jedzac zupe, zabieramy 50kcal z potrawy
	void eat() override
	{
		kcal -= 70;
		//int& kcal = getKcal();
		//kcal -= 70;
		std::cout << "Jem zupe" << std::endl;
	}
};

class Main : public Dish
{
public:
	Main(int _kcal) : Dish(_kcal) {}
	// jedzac glowne danie, zabieramy 100kcal z potrawy
	void eat() override
	{
		kcal -= 100;
		std::cout << "Jem danie glowne" << std::endl;
	}

};