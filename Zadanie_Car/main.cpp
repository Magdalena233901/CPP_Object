// Zadanie_Car.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "car.hpp"

int main()
{
	Car audi(EngineType::Diesel);
	audi.oilChange();
	audi.annualService();
}
