#pragma once
#include <iostream>

class Vehicle
{
	int* lastDrives;
public:
	Vehicle();
	//virtual void drive(int* lastDrives) = 0;
	virtual void drive() = 0;
};

class Bus : public Vehicle
{
public:
	//void drive(int* lastDrives) override;
	void drive() override;
};

class Bicycle : public Vehicle
{
public:
	//void drive(int* lastDrives) override;
	void drive() override;
};
