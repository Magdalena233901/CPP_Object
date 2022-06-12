#include <iostream>
#include "Vehicle_13.2.h"


int main()
{
	//Vehicle v; //nie powinno sie kompilowac - bo metoda drive jest czysto wirtualna

	////a to powinno sie kompilowac
	Vehicle* v = new Bus();
	v->drive();
	delete v;

	return 0;
}