#include <iostream>
#include "Zwierzeta.hpp"

//POLIMORFIZM->gdy rozwazamy jakis obiekt, (referencja lub wskaŸnik), szukamy czesci wspolnej, zmieniamy tylko funkcje
// stosujac polimorfizm mozemy odwo³aæsiê do obiekrow typów z tej samej hierarchii dziedziczenia poprzez wspólny typ nadrzêdny (interfejs)

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

	//to samo co ca³y main zapisane inaczej, wtedy nie musimy pisaæ ca³ej tej funkcji doRoar, wskaŸnikiem zrobimy tu przekazanie klasy pochodnej
	//Animal* pa = new Lion(); //twozre obiekt lwa, ale zapamietuje go jako animal. Lion jest animalem, wiec mo¿emy tak zrobiæ
	//pa->roar();
	//delete pa;
}
