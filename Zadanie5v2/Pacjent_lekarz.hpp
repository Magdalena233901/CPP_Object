#pragma once
#include<iostream>
#include <iostream>

class Pacjent;

class Lekarz
{
	Pacjent& pacjent;
	std::string docName;
public:
	Lekarz(Pacjent& pacjent);
	void setName(std::string docName);
	void receiveEmail(std::string contentOfEmail);
};

class Pacjent
{
	Lekarz* doctor = nullptr; //wskaznik na adres w pamieci
	std::string pacName;
public:
	void setName(std::string pacName);
	void setDoctor(Lekarz* doctor);
	void sendEmailToDoctor();
};