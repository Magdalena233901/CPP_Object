#include<iostream>
#include "Pacjent_lekarz.hpp"

Lekarz::Lekarz(Pacjent& _pacjent) : pacjent(_pacjent)
{
}

void Lekarz::setName(std::string docName)
{
	this->docName = docName;
}

void Lekarz::receiveEmail(std::string contentOfEmail)
{
	std::cout << "Doktor odebral wiadomosc o tresci: " << std::endl << contentOfEmail << std::endl;
}

void Pacjent::setName(std::string pacName)
{
	this->pacName = pacName;
}

void Pacjent::setDoctor(Lekarz* doctor)
{
	this->doctor = doctor;
}

void Pacjent::sendEmailToDoctor()
{
	std::cout << "Pacjent wysyla do lekarza wiadomosc. " << std::endl;
	doctor->receiveEmail("Prosze o wystawienie recepty na lek XXX. ");
}
