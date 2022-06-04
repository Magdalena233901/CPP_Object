#include "Student.hpp"

Student::Student(int noOfGrades)
{
	// twozrymy dynamicznie tablice o dlugosci noOfGrades
	//przypisujemy wskaznik na pozcatek tej tablicy do pola grades
	grades = new int[noOfGrades];
	this->noOfGrades = noOfGrades;
}

Student::~Student()
{
	//w tym konkretnym przypadku, nie ma to sensu, bo konstruktor sie wykona zawsze 
	if (grades != nullptr)
	{
		delete[] grades;
		grades = nullptr;
	}
}

void Student::addGrade(int grade)
{
	if (index < noOfGrades) //sprawdzamy czy nie piszemy poza tablica
	{
		grades[index] = grade;
		index++;
	}
}

double Student::average()
{
	double sum = 0;
	for (int i = 0; i < index; i++)
	{
		sum += grades[i];
	}
	return sum/index;
}
