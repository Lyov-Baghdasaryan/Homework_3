#include <iostream>
#include "Account.h"
#include "Bank.h"

int main(){
	/*
	Account account1(1, "John", 4600);
	account1.printInfo();
	account1.Deposit(700);	
	account1.printInfo();
	account1.Withdraw(1050);
	account1.printInfo();
	*/
	std::string name = "Alex";
	Bank AEB;
	AEB.addAccount(name, 34000);
	//AEB.printInfo(0);

	return 0;
}
