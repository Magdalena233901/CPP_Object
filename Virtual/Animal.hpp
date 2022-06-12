#pragma once
#include <iostream>

class Animal
{
	std::string name;
public:

	Animal(std::string _name) : name(_name){std::cout << "Animal constructor " << std::endl;}
	//Animal() {std::cout << "Animal constructor " << std::endl;}
	~Animal(){std::cout << "Animal destructor " << std::endl;}
	std::string getName(){return name;}
};

class Mammal : public Animal 
{
public:
	Mammal(std::string _name) : Animal(_name) { std::cout << "Mammal class constructor " << std::endl; }
	~Mammal(){std::cout << "Mammal destructor " << std::endl;}
};

class Cat : public Mammal
{
public:
	Cat(std::string _name): Mammal(_name) { std::cout << "Cat constructor " << std::endl; }
	~Cat(){std::cout << "Cat deconstructor " << std::endl;}
};

class Dog : public Mammal
{
public:
	//Dog(std::string _name = "Reksio") : Mammal (_name) //tu jest z parametrem domyslnym
	//Dog(std::string _name) : Mammal (_name) //tu odpowiednik tego co w linijce wczesniej
	Dog(std::string _name = "Reksio") : Mammal(_name)//tu odpowiednik tego co w linijce wczesniej
	{
		std::cout << "Dog class constructor " << std::endl;
	}
	~Dog(){std::cout << "Dog destructor " << std::endl;}
	
};