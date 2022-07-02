#pragma once
#include<string>
#include "EmployeeList.hpp"

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
};