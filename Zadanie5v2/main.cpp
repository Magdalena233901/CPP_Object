#include <iostream>
#include "Pacjent_lekarz.hpp"

int main() 
{
	Pacjent Andrzej;
	Lekarz doctor(Andrzej);

	Andrzej.setDoctor(&doctor);
	Andrzej.sendEmailToDoctor();
	
	return 0;
}