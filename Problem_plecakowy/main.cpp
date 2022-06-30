#include "Backpack.hpp"
#include <iostream>

int main()
{
	//Backpack backpack
	//Robber robber(30, backpack);
	Robber robber(30); // inicjalizacje
	Shop shop;
	std::cout << shop;
	std::cout << robber;
	robber.robWhatever(shop);
	std::cout << "Value of backpack: " << robber.getValue() << std::endl;
	std::cout << shop;
	std::cout << robber;

	return 0;

}


//temu  s³u¿a operatory przeci¹zenia
//Robber r;
//std::cout << r;

//jak to  ma dzia³aæ - opis:
// //robber.rob
//steal ze sklepu
//put do plecaka - ma to byc w metodzie robb whatever