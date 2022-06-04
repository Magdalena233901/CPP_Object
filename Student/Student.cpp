// Student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Student
{
private:
	char  name[30];
	char  surname[30];
	
public:
	//member function to get student's details
	void getDetails(void);

	int Avereage(int tab[], int size);
	//member function to print student's details
	void putDetails(void);

};

void Student::getDetails(void) 
{
	
	std::cout << "Enter name of student: " << std::endl;
	std::cin >> name;
	std::cout << "Enter surname of student: " << std::endl;
	std::cin >> surname;
		
}

int Student :: Avereage(int markTab[], int size)
{
	int suma = 0;
	int srednia = 0;
	for (int i = 0; i < size; i++)
	{
		srednia = srednia + markTab[i];
	}
	srednia = srednia / size;
	std::cout << "Srednia ocen to: " << srednia;
	return srednia;
}

void Student::putDetails(void) 
{
	std::cout << "Student details: " << std::endl;
	std::cout << "Name:" << name << ", Surname:" << surname << std::endl;
}

int main()
{
	const int size = 5;
	int markTab[size];

	Student study;

	study.getDetails();

	std::cout << "Enter 5 marks of student: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cin >> markTab[i];
	}

	study.Avereage( markTab, size);
	study.putDetails();
}

