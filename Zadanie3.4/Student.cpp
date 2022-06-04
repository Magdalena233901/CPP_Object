#include "Student.hpp"

Student::Student(int noOfGrades)
{
	//tworzymy dynamicznie tablice o dlugosci noOfGrades
	//przypisujemy wskaznik na poczatek tej tablicy do pola grades
	grades = new int[noOfGrades];
	this->noOfGrades = noOfGrades;
}

Student::~Student()
{
	//w tym konkretnym kontekscie to nie ma sensu bo konstruktor sie wykona zawsze
	//ale to dobra praktyka, by sprawdzic czy usuwajac wskaznik (obiekt zaalokowany) odwolujemy sie do niepustego wskaznika
	if (grades != nullptr) {
		delete[] grades;
		//podobnie jak w komentarzu wyzej - niepotrzebne
		grades = nullptr;
	}
}

void Student::addGrade(int grade)
{
	if (index < noOfGrades) //sprawdzmy czy nie piszemy poza tablica
	{
		grades[index] = grade;
		index++;
	}
	/*
	* ta petla wypelni nam tablice ta sama ocena - a nie o to nam chodzi!
	for (int i = 0; i < noOfGrades; i++)
	{
		grades[i] = grade;
		// [_,_,_]
		// [4,4,4]
	}
	*/
}

double Student::average()
{
	double sum = 0;
	for (int i = 0; i < index; i++)
	{
		sum += grades[i];
	}
	return sum / index;
}

/*
* inne podejscie z petla, gdzie w konstruktorze wypelniamy tablice zerami
//[_,_,_] - domyslnie
//v
//[0,0,0] - po konstruktorze
//[2,0,0] - po pierwszym wywolaniu metody
//[2,2,0] - bedziemy zawsze w forze szukac pierwszego 0 (ifem zagniezdzonym)
//[2,2,4] - jesli go znajdziemy to w tym miejscu nalezy wstawic nowa ocene
*/

/*
index	noOfGrades
0	<	1			[_]
1		1			[3]
*/
