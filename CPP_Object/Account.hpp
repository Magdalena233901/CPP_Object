#pragma once
#include <string>

class Account
{
	int balance = 0;
	std::string number;
	std::string generateBankNumber();
public:
	Account();
	int withDraw(int amonut);
	void deposit(int amount);
	int getBalance();
	
};
