#include <iostream>

class Car
{
};
class LuxuryCar : public Car
{
};

class Employee
{
protected:
	int salary;
public:
	Employee(int _salary) : salary(_salary) {}
	//virtual int paySalary()
	//{
	//	std::cout << "Generyczny pracownik - ile mu wyplacic tak naprawde...?" << std::endl;
	//	return salary;
	//}
	virtual int paySalary() = 0;
	virtual Car* sluzbowyCar() = 0; // typy kowariantne
};

class CEO : public Employee
{
public:
	CEO() : Employee(100000) {}
	int paySalary() override
	{
		//if (aktualnyMiesiac == czerwiec)
			//salary+= bonus
		std::cout << "Sprawdzam czy to miesiac bonusa, bo wtedy CEO zarabia jeszcze wiecej" << std::endl;
		return salary;
	}
	LuxuryCar* sluzbowyCar() override
	{
		LuxuryCar* car = new LuxuryCar();
		return car;
		//return new LuxuryCar();
	}
};

//PA
class PersonalAssistant : public Employee
{
public:
	PersonalAssistant() : Employee(10000) {}
	int paySalary() override
	{
		//if (aktualnyMiesiac == co drugi miesiac)
			//salary+= 1000
		std::cout << "Sprawdzam czy to miesiac bonusa, bo wtedy PA zarabia 1000zl wiecej" << std::endl;
		return salary;
	}
	Car* sluzbowyCar() override
	{
		return new Car();
	}
};

Employee* findEmployee(int id)
{
	//wczytujemy plik
	//patrzymy na ostatnia kolumne
	std::string lastColumn = "CEO"; // "PA" albo "CEO" - dynamicznie wczytywane z pliku

	Employee* employee = nullptr;
	if (lastColumn == "CEO")
	{
		employee = new CEO();
	}
	else
	{
		employee = new PersonalAssistant();
	}
	return employee;
}

void doPaySalary(Employee* employee)
{
	employee->paySalary();
}

int main()
{
	//pobierz pracownika o id=16
	Employee* e = findEmployee(16);
	//double avg = average(tabgrades); - analogia
	doPaySalary(e);
	delete e;

	//Employee e2;
	return 0;
}