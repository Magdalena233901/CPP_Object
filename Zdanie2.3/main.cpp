#include <iostream>

class Student 
{
	
public:
	std::string studentName;
	std::string studentSurname;

	std::string getID(std::string studentName)
	{
		std::cout << "Enter name of student: " << std::endl;
		std::cin >> studentName;
		return studentName;
	}
		
};

int main()
{
	Student study;
	study.studentName = "Magda";
	std::cout << study.studentName << std::endl;
}
	