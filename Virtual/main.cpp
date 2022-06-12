#include "Animal.hpp"
#include <iostream>

void foo(std::string name) //tzreba pamietac o tym przekazaniu, bez tego name bedzie w tym przypadku dla metody Cat niezidentyfikowany
{
	std::cout << std::endl;
	std::cout << "Metoda" << std::endl;
	//Cat cat(name);
	Cat cat(name);
	std::cout << cat.getName() << std::endl;
	//Cat* cat = new Cat(); // Tutaj dynamiczne podejscie do tego problemu
	std::cout << "Koniec metody" << std::endl;
	std::cout << std::endl;
	//delete cat; //wtedy konieczny jesst delete zeby nie mie  wycieku pamieci
}

int main()
{
	Dog dog;
	std::cout << dog.getName() << std::endl;
	std::cout << std::endl;
	foo("Puszek");
	std::cout << std::endl;
}