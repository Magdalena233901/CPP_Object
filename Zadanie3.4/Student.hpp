#pragma once

class Student {
	int* grades = nullptr;
	int noOfGrades = 0; //maxGrades
	int index = 0;
public:
	Student(int noOfGrades);
	~Student();
	void addGrade(int grade);
	double average();
};
