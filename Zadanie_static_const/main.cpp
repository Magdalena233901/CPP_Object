#include <iostream>
#include "Static_const.hpp"


int main()
{
	//to juz znacie z poprzednich zajec
	//const int a = 15;
	//int b = 25;
	//a = b;
	//b = a;


	const LectureRoom roomA(15);
	LectureRoom roomB(30);
	roomB = roomA; //dziala
	// roomA = roomB - nie dziala
	// roomB.size = 300; -- to po schowaniu pola jako prywatne przestalo dzialac (dla const caly czas dzialalo)
	//roomA.size = 300; - nie dziala
	//roomA.patronage = "asd"; - nie dziala

	std::cout << roomB.getSize() << std::endl;
	std::cout << roomA.getSize() << std::endl;

	return 0;
}

// LectureRoom(const &LectureRoom room)