#include <iostream>

int referencje()
{
	int a = 6;
	int b = 33;
	int& ra = a; // spiecie ra z a; teraz ra->a
	ra = b; // zmiana wartosci a na wartosc b czyli 33
			// ta operacja nie powoduje spiecia ra z b
	std::cout << a;

	//int& rx;  // blad kompilacji - nie ustawiam wartosci poczatkowej

	int x = 5;
	x = 7;
	return 0;
}

//void swap(int pierwsza, int druga) // przekazanie parametrow poprzez kopie; x i y - niedotkniete
void swap(int& pierwsza, int& druga) // przekazanie parametrow przez referencje - wiec zmieniamy tez x i y
//ukryte int& pierwsza = x; int& druga = y;
{
	int tmp = pierwsza;
	pierwsza = druga;
	druga = tmp;
	std::cout << pierwsza << " " << druga << std::endl;
}

int metodaReferencje()
{
	int x = 10;
	int y = 20;

	//int tmp = x;
	//x = y;
	//y = tmp;
	// zamienmy to na funkcje
	swap(x, y);
	//swap(30, 20); taka linijka nie zadziala jesli przez referencje

	std::cout << x << " " << y << std::endl;
	return 0;
}

// !!!!!
int& returnReference()  ///tak nie robimy - zmienna a ginie wraz z koncem metody, wiec zwrocenie do niej referencji spowoduje ze mamy dostep do smieci a nie do zmiennej
{
	int a = 5;
	int& ra = a;
	return ra;
	//return a; tez zadziala (a wlasciwie nie bo nie wolno zwracac referencji do lokalnych zmiennych :))
}

int globalVar = 6;
int& returnReferenceToGlobal() // to juz jest ok, ale uwaga i tak
{
	int& rGlobalVar = globalVar;
	return rGlobalVar;
}

//gdybysmy nie mieli &, to metody bylyby bardzo nudne
//zwracalyby tylko jedna wartosc, przeplyw bylby bardzo liniowy
//referencje pozwalaja nam osiagnac "efekt uboczny" dzialania metody
//std::string manyParameters(Point a, Student b, Address c)
//{
//	a.x++;
//}

int zwracanieReferencji()
{
	int& ref = returnReference();
	// takt procesora - wywlaszczenie watku
	std::cout << ref << std::endl;
	return 0;
}

int wskazniki()
{
	int a = 16;
	int* pa = &a;
	std::cout << a << " " << &a << std::endl;
	pa++; // przesuwamy o 4, bo jeden int ma 4 bajty
	std::cout << a << " " << pa << std::endl; // ale a sie nie zmienia
	//a++;
	pa--;
	(*pa)++; // operator wyluskania
	std::cout << a << " " << *pa << std::endl; // a sie zmienia
}

void pointerFunction(int* pa)
{
	(*pa)++;
}
//int		3 typy zmiennych
//int&
//int*

int main()
{
	int a = 6;
	std::cout << a << std::endl;
	int* pa = &a; //& przy pobraniu adresu pamieci jest przy zmiennej
	//int& ra = a; //& w referencji jest przy typie
	pointerFunction(pa);
	//pointerFunction(&a); // to samo co dwie linijki wyzej
	std::cout << a << std::endl;
	return 0;
}

//Address& address
//public: 
//	Student(Address& _address) : address(_address)
//	{
//		std::cout << address // ????
//		this->address = _address;
//	}

//int* pa
//*pa -> zwraca wartosc
//int a
//&a -> zwraca adres