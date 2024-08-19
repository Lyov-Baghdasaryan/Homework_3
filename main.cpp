#include <iostream>
#include "Bank.h"

int main(){
	
	Bank account1("John", "hgm1234", 4600, 1);
	
	account1.printInfo();
	account1.Deposit(700);	
	account1.printInfo();
	account1.Withdraw(1050);
	account1.printInfo();

	return 0;
}
