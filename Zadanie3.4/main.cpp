#include <iostream>
#include "Student.hpp"

int main()
{
	Student jacek(10);
	jacek.addGrade(3);
	jacek.addGrade(4);
	jacek.addGrade(5);
	jacek.addGrade(5);
	std::cout << jacek.average() << std::endl;
}

