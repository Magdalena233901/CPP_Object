#include "Vehicle.hpp"
#include <iostream>

Vehicle::Vehicle()
{
	this->lastDrives = new int[4];
}

//void Bus::drive(int* lastDrives)
void Bus::drive()
{
	std::cout << "Autobus jedzie " << std::endl;
}

//void Bicycle::drive(int* lastDrives)
void Bicycle::drive()
{
	std::cout << "Rower jedzie " << std::endl;
}

