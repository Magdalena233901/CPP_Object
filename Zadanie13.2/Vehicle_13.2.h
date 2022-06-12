#pragma once
#include <iostream>

class Vehicle
{
	//int* lastDrives; w pierwszej wersji to jest tutaj i delete jest na poziomie Vehicle, ale chcemy sprawdzic jak to zadzia³a na poziomie Busa
public:
	//Vehicle();
	virtual ~Vehicle();
	//virtual void drive(int* lastDrives) = 0;
	virtual void drive() = 0;
};

class Bus : public Vehicle
{
	int* lastDrives;
public:
	//void drive(int* lastDrives) override;
	void drive() override;
	virtual ~Bus();
	Bus();
};

class Bicycle : public Vehicle
{
public:
	//void drive(int* lastDrives) override;
	void drive() override;
};


