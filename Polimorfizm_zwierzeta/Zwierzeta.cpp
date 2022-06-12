#include <iostream>
#include "Zwierzeta.hpp"

Animal::Animal()
{
}
Animal::Animal(std::string _name) : name(_name)
{
}
Animal::~Animal(){std::cout << "Animal deconstructor" << std::endl;}

std::string Animal::getName(){return name;}

void Animal::roar() const{std::cout << "Animal roar" << std::endl;}

void Animal::sleep(){std::cout << "Animal sleep" << std::endl;}

void Lion::roar() const{std::cout << "Lion roar" << std::endl;}

void Lion::feast(){std::cout << "Lion feast" << std::endl;}