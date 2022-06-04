#pragma once
#include <string>
#include <iostream>

//---------------------------------KOMPOZYCJA--------------------------
//class Student {
//	class Adress {
//	public:
//		std::string street;
//		int houseNo;
//	};
//	Adress adress;
//public:
//	Student(std::string street, int houseNo);
//};
//--------------------------END OF KOMPOZYCJA--------------------------

//-----------------------------------TEORETYCZNIE ASOCJACJA, ALE COS NIE POSZ£O ----------------------------------
//struct Address
//{
//	std::string street;
//	int houseNo;
//	Address
//
//};
//
//class Student
//{
//	Address address;
//public:
//	Student(Address address);
//};
//-----------------------------------TEORETYCZNIE ASOCJACJA, ALE COS NIE POSZ£O ----------------------------------


//forward declaration
class Student;
//class PromotorX; niepotrzebne - bo zaraz i tak deklarujemy

class Promotor
{
	Student& student; //referencja do studenta -> musimy ja ustawic w ramach konstruktura - lista inicjalizujaca
	std::string name;
public:
	Promotor(Student& student); //musimy w liscie inicjalizujacej, nie w ciele
	void setName(std::string name);
	void receiveEmail(std::string emailCopy);
};

class Student
{
	Promotor* promotor = nullptr; //wskaznik czyli po prostu adres w pamieci
	std::string name;
public:
	void setName(std::string name);
	void setPromotor(Promotor* promotor); //tu mamy wskaznik; nie moze byc referencja bo musialaby byc ustawiona w konstruktorze -> doszlibysmy do cylkicznej zaleznosci
	void sendEmailToPromotor();
};
