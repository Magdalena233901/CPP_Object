#include "static_const.hpp"
#include <string>
#include <iostream>

int Car::Engine::count = 0;

Car::Car(EngineType engineType, double size)
{
	engine.setEngineType(engineType);
	engine.setSize(size);
	vin = Car::Engine::generateVIN(engine);
}

void Car::annualService()
{
	std::cout << "service has been done" << std::endl;
}
void Car::oilChange()
{
	engine.oilChange();//wywoluje funkcje oil change obiektu engine
}
std::string Car::getVIN()
{
	return vin;
}
std::string Car::Engine::generateVIN(Engine engine)
{
	std::string result = "";
	if (engine.engineType == EngineType::Diesel)
	{
		result += "1";
	}
	else
	{
		result += "2";
	}

	int sizeIn = static_cast<int>(engine.size * 10);
	std::string sizeString = std::to_string(sizeIn);
	result += sizeString;

	//result += "0061";
	result += std::to_string(engine.getCount());

	return result;
}

int Car::Engine::getCount()
{
	return count;
}

Car::Engine::Engine()
{
	count++;
}

void Car::Engine::oilChange()
{
	std::cout << "oil change" << std::endl;
}

void Car::Engine::setEngineType(EngineType engineType)
{
	this->engineType = engineType;
}

void Car::Engine::setSize(double size)
{
	this->size = size;
}
