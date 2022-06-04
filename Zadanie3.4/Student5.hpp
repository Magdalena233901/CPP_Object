# pragma once 

class Student
{
	int* grades; //wskaznik, bo nie wiemy ile bedzie ocen
	int noOfGrades = 0; //maxGrades byloby lepsza nazwa
	int index = 0;
public:
	Student(int noOfGrades);
	~Student();
	void addGrade(int grade);
	double average();
};