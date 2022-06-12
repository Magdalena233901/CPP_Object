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
	void roar();
	void sleep();
};
class Lion : public Animal
{
public:
	void roar();
	void feast();
};

