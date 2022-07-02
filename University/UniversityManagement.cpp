#pragma once
#include <iostream>
#include "UniversityManagement.hpp"

double University::calculateEmployerCost()
{
	double sum = 0;
	for (int i = 0; i < list.getCount(); ++i)
	{
		sum += list.get(i)->calculateEmployerCost();
	}
	return sum;
}

void University::printTeachingStaff()
{
	for (int i = 0; i < list.getCount(); ++i)
	{
		//if(staff[i]->isTeachingStaff())
		if (list.get(i)->isTeachingStaff())
			std::cout << *list.get(i) << std::endl;
	}
}

void University::printAllStaffNetIncomes(int hoursInMonth)
{
	for (int i = 0; i < list.getCount(); ++i)
	{
		std::cout << *list.get(i) << " - " << list.get(i)->getEmployeeNetSalary(hoursInMonth) << std::endl;
	}

}

void University::add(Employee* object)
{
	list.add(object);
}