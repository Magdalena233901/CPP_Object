#include "Account.hpp"
#include <string>
#include <iostream>

std::string Account::generateBankNumber()
{
    // zwraca sta�y numer - albo random ci�g
    return "123456789";
}

Account::Account()
{
    std::cout << "operacje na r-ku " << generateBankNumber() << std::endl;
}

int Account::withDraw(int amonut)
{
    balance -= amount;
    return 0;
}

void Account::deposit(int amount)
{
    balance += amount;
}

int Account::getBalance()
{
    return balance;
}
