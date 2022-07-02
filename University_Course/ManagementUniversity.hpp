#pragma once
#include<string>
#include "ListEmployee.hpp"

class University
{
	//Employee* employees = new Employee[100]; // nie mozemy jesli Employee jest abstrakcyjna klasa i/lub nie ma bezparametrowego konstruktora
	/*Employee** staff; */
	EmployeeList list;
public:
	double calculateEmployerCost();
	void printTeachingStaff();
	void printAllStaffNetIncomes(int hoursInMonth);
	void add(Employee* object);
	//void remove(Employee* object); 
//[1, 5, 8, 13, 2, 5, 7]
//[1, 5, 8, 0, 2, 5, 7]
//[1, 5, 8, 2, 5, 7, 7]
//[1, 5, 8, 2, 5, 7, 0]
//[1, 5, 8, 2, 5, 7]
};

class Student;

class Course
{
	std::string name;
	Employee* tutor; //EducationalEmployee jako klasa/warstwa posrednia
	StudentList list;
public:
	Course(std::string name);
	void setTutor(Employee* tutor); //potrzebne zabezpieczenie przed niepoprawnym prowadzacym
	void addStudent(Student* student)
};

class Student
{
	std::string firstName;
	std::string secondName;
	//Course** courses = new Course * [10];
	CourseList list;
public:
	void signIn(Course* course);
	//void resign(Course* course); (do rozwiazania poza zajeciami)

};
