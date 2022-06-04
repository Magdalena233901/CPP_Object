//5. Asocjacja, kompozycja, agregacja
//5.1. (agregacja)dla klasy Student, dodaj jego adres zamieszkania
//5.2. (asocjacja)zdefiniuj klasê Professor i powi¹¿ j¹ ze studentem

#include <iostream>
#include "Asocjacja.hpp"

//int main()
//{
//---------------------------------KOMPOZYCJA--------------------------
// Student janNowak("Krolewska", 5);
//--------------------------END OF KOMPOZYCJA--------------------------



//-----------------------------AGREGACJA-----------------------------------------
	//Address address("Krolewska", 5);
	//Student janNowak(address);
	//Student alaNowak(address);

	//address.houseNo = 5;
	//address.houseNo = 5;

	////gdyby address byl klasa:

	//Address address("Krolewska", 5);
	//address.getHouseNo();
	//

//int main()
//{
//	Promotor promotor;
//	Student dionizy(promotor); // polaczenie student->promotor
//	promotor.setStudent(dionizy); // polaczenie promotor->student
//	return 0;
//} ----------------------------END OF FATAL AGREGACJA-----------------------------------------

	int main() //alternatywne podejscie
	{
		Student dionizy;
		Promotor promotor(dionizy); // w konstruktorze przyjmujemy referencje (&), a wiec bedziemy na zywo podpieci do drugiego obiektu. Zmiana w jednym spowoduje zmiane w drugim

		dionizy.setPromotor(&promotor); //przekazujemy wskaznik [miejsce w pamieci] na obiekt promotor a nie sam obiekt
		dionizy.sendEmailToPromotor();
		//promotor.setStudent(dionizy);
		return 0;
	}