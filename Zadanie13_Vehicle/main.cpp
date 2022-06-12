#include <iostream>
#include "Vehicle.hpp"

int main()
{
	Vehicle* v = new Bus();
	v->drive();
	delete v;
}