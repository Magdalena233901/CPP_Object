#pragma once

class MyString
{
	char* arr;

public:
	MyString();
	MyString(char* input);
	void print();
	//albo append zwraca nowy obieikt typu MyString
	MyString append(char* input); //to spelnia cechy immutability
	//albo append zmienia aktualny obiekt MyString
    //
};
