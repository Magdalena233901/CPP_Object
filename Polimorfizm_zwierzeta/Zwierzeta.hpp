#pragma once
#include <iostream>
#include<string>

class Animal {
	std::string name;
public:
	Animal();
	Animal(std::string _name);
	~Animal();
	std::string getName();
	//void roar()const; ////Nie lion, ale animal robi roar
	virtual void roar()const; //jak dodamy slowo virtual, wtedy lion zrobi roar
	void sleep();
};
class Lion : public Animal
{
public:
	//void roar();
	virtual void roar() const; //jak dodamy slowo virtual, wtedy lion zrobi roar, musza byæ idealnie te same identyfikatory const i virtual i tutaj i tutaj
	void feast();
};
