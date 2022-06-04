#include <iostream>

class Bank {

	double balance = 0;
	
public:

	Bank(double balance)
	{
		this -> balance = balance;
	}

	Bank(const Bank& old)
	{
		balance = old.balance;
		std::cout << "konstruktor kopiujacy" << std::endl;
	}

	~Bank()
	{
		std::cout << "destruktor" << std::endl;
	}

	double withdraw(double amount) {
		double withdrew = amount;
		if (balance > amount)
		{
			balance -= amount;
		}
		else
		{
			withdrew = balance;
			balance = 0;
		}
		return withdrew;
	}

	double withdraw2(double amount) {
		if (balance >= amount)
		{
			balance -= amount;
		}
		return balance;
	}

	void deposit(double amount) {
		balance += amount;
	}

	double getBalance(); // deklaracja
};

double Bank::getBalance() // definicja
{
	return balance; //return this->balance tez by zadzialalo
}

void foo()
{
	Bank inMethod(0);
}


int main() {
	Bank savingAccount(100);
	//Bank savingAccount2 = savingAccount; //ten zapis jest jednoznaczny do nastepnej linijki
	Bank savingAccount2(savingAccount);
	{ // tego nie musi tu byæ, to jest rozwiniêcie tej metody, w sensie te nawiasy i zawartosc
		Bank another(savingAccount2);
		foo();
	}
	std::cout << "dynamic object start: " << std::endl;
	Bank* dynamic = new Bank(100);
	std::cout << "some magic in between and destructor just after:  " << dynamic ->getBalance() << std::endl;
	delete dynamic;
	std::cout << "dynamic object end: " << std::endl;

	savingAccount.deposit(100);
	std::cout << savingAccount.getBalance() << std::endl;
	double cash = savingAccount.withdraw(50);
	std::cout << cash << " " << savingAccount.getBalance() << std::endl;
	cash = savingAccount.withdraw(100); // 50
	std::cout << cash << " " << savingAccount.getBalance() << std::endl;
	return 0;
}