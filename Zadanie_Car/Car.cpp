#include "car.hpp"
#include<iostream>

Car::Car(EngineType engineType)
{
	engine.setEngineType(engineType);
}

void Car::annualService()
{
	std::cout << "service has been done" << std::endl;
}
void Car::oilChange()
{
	engine.oilChange();//wywoluje funkcje oil change obiektu engine
}
void Car::Engine::oilChange()
{
	std::cout << "oil change" << std::endl;
}

void Car::Engine::setEngineType(EngineType engineType)
{
	this->engineType = engineType;
}