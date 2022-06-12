#include "Vehicle_13.2.h"
#include <iostream>

//Vehicle::Vehicle()
//{
//	this->lastDrives = new int[4];
//}

Vehicle::~Vehicle()
{
	//delete[] lastDrives; //to wspolpracowala z ta zmienna zainicjalizowana na poziomie vehicle, przenosimy do bus
	std::cout << "Destruktor vehicle " << std::endl;
}

//void Bus::drive(int* lastDrives)
void Bus::drive()
{
	std::cout << "Autobus jedzie " << std::endl;
}

Bus::~Bus()
{
	std::cout << "Destruktor busa-czyszzce pamiec busa " << std::endl;
	delete[] lastDrives;
}

Bus::Bus()
{
	std::cout << "Konstruktor busa - rezeruje pamiec dynamiczna " << std::endl;
	lastDrives = new int[4];
}

//void Bicycle::drive(int* lastDrives)
void Bicycle::drive()
{
	std::cout << "Rower jedzie " << std::endl;
}

