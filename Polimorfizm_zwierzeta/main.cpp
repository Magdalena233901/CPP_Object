#include <iostream>
#include "Zwierzeta.hpp"

//POLIMORFIZM->gdy rozwazamy jakis obiekt, (referencja lub wska�nik), szukamy czesci wspolnej, zmieniamy tylko funkcje
// stosujac polimorfizm mozemy odwo�a�si� do obiekrow typ�w z tej samej hierarchii dziedziczenia poprzez wsp�lny typ nadrz�dny (interfejs)

void doRoar(const Animal& animal) //tutaj przekazujemy tego animala, ale z racji ze jest const, to cala te metode musimy zmieniac na const w kazdym pliku
{
	animal.roar();
}

int main()
{
	Lion l;
	doRoar(l); //przekazujemy lion do metody ktora pzryjmuje animal

	Animal a;
	doRoar(a);

	//to samo co ca�y main zapisane inaczej, wtedy nie musimy pisa� ca�ej tej funkcji doRoar, wska�nikiem zrobimy tu przekazanie klasy pochodnej
	//Animal* pa = new Lion(); //twozre obiekt lwa, ale zapamietuje go jako animal. Lion jest animalem, wiec mo�emy tak zrobi�
	//pa->roar();
	//delete pa;
}
