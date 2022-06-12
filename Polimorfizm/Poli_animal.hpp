#pragma once
#include <iostream>

#include<string>
class Animal
{
public:
	Animal() { std::cout << "Animal constructor" << std::endl; }
	~Animal() { std::cout << "Animal destructor" << std::endl; }
	void roar();
	void sleep();
};

class Lion : public Animal
{
public:
	void roar();
	void feast();
};


