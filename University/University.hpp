#pragma once

enum class FormOfEmployment {
	Contract,
	ContractOfMandate,
	ContractOfEmployment
};

class University
{
	Employee employees[10]; // - nie mozemy jesli Employee jest abstrakcyjna klasa
	//Employee* employees = new Employee[100]; // rule of 3 bo destruktor konieczny, ale
	int count = 0;
public:
	double calculateEmployerCost();
	void printTeachingStaff();
	void printAllStaffNetIncomes();
};

//abstrakcyjna klasa - nie mozna tworzyc obiektow tej klasy
class Employee
{
protected:
	FormOfEmployment form;
	std::string firstName;
	std::string secondName;
	double salary;
public:
	Employee(FormOfEmployment);
	double getEmployeeNetSalary();
	virtual bool isTeachingStaf();// = 0;
};

class Professor : public Employee
{

};

class Lecturer : public Employee
{

};

class Assistant : public Employee
{

};

class Keeper : public Employee
{

};

class Guard : public Employee
{

};

