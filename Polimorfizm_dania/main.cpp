#include "Dishes.hpp"
#include <iostream>

//przekazujemy tutaj wskaznik na Dish* korzystajac z polimorfizmu
bool handleInput(Dish* dish) //zwraca false jesli powinnismy skonczyc petle; true - jesli wszystko jest ok
{
	std::string operation;
	std::cin >> operation;
	if (operation == "dosc") {
		return false;
	}
	else if (operation == "eat") {
		dish->eat();
	}
	std::cout << "Kcal: " << dish->getKcal() << std::endl;
	return true;
}

Dish* createDish(int select)
{
	Dish* dish;
	//jezeli 1 -> stworz zupe
	//jezeli 2 -> stworz danie glowne    
	if (select == 1)
	{
		dish = new Soup(200);
	}
	else
	{
		dish = new Main(500);
	}
	return dish;
}

int main()
{
	//kelner nas pyta co sobie zyczymy
	std::cout << "Co podac? 1-zupa, 2-glowne" << std::endl;
	int select;
	std::cin >> select;
	Dish* dish = createDish(select); // wywolanie metody createDish, ktora tworzy obiekt Soup albo Main, ale zwraca wskaznik na Dish

	std::cout << "Kcal: " << dish->getKcal() << std::endl;
	// w petli:
	//    za kazdym razem jak uzytkownik napisze "eat" - wywolujemy metode eat
	//    jesli danie sie skonczy (kalorycznosc == 0) -> wychodzimy z petli/programu
	bool state = true;
	do {
		state = handleInput(dish);
	} while (state && dish->getKcal() > 0);
	std::cout << "Kcal: " << dish->getKcal() << std::endl;

	delete dish;
	return 0;
}

//Dish* dish;
//if ()
//   dish = new Soup(200);
//else
//   dish = new Main(500);

bool doSth(int i)
{
	if (i == 5)
	{
		return false;
	}
	return true;
}

void petlaZewnetrzna()
{
	for (int i = 0; i < 10; i++)
	{
		bool state = doSth(i);
		if (state == 5)
		{
			break;
		}
	}
}

void petlaZewnetrznaDoWhile()
{
	int i = 0;
	bool state;
	do
	{
		state = doSth(i);
		i++;
	} while (state == true && i < 10);
	//} while (state && i < 10);
}