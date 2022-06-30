#include "University.hpp"
#include <iostream>

int main()
{
	University u;

	Professor janina("Janina", "Abacka", FormOfEmployment::Contract, 60);
	Professor jan("Jan", "Badulski", FormOfEmployment::ContractOfEmployment, 8700);
	Lecturer krzysztof("Krzysztof", "Powolski", FormOfEmployment::ContractOfEmployment, 6000);
	Lecturer karolina("Karolina", "Szybka", FormOfEmployment::ContractOfEmployment, 5700);
	Assistant hanna("Hanna", "Nowicjusz", FormOfEmployment::ContractOfMandate, 4500);
	Keeper tomasz("Tomasz", "Oliwny", FormOfEmployment::ContractOfMandate, 4000);
	Guard alicja("Alicja", "Strazacka", FormOfEmployment::Contract, 24);

	u.add(janina);
	u.add(jan);
	u.add(krzysztof);
	u.add(karolina);
	u.add(hanna);
	u.add(tomasz);
	u.add(alicja);

	//dynamiczne tworzenie obiektu i dodawanie do uniwersytetu w zaleznosci od danych uzytkownika??

	std::cout << "Suma wynagrodzen: " << u.calculateEmployerCost() << std::endl;
	u.printTeachingStaff();
	u.printAllStaffNetIncomes();
}
