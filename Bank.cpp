#include <iostream>
#include "Account.h"
#include "Bank.h"

Bank::Bank() : capacity(5), count(0), arr(new Account[capacity]) {}

Bank::~Bank(){
	delete []arr;
	arr = nullptr;
}

void Bank::addAccount(){

        if(count == capacity){
                capacity *= 2;
                Account* tmp = new Account[capacity];
                for(int i = 0; i < count; i++){
                        tmp[i] = arr[i];
                }

                delete []arr;
                arr = tmp;
                tmp = nullptr;

        }

        Account obj;
        arr[count] = obj;
        ++count;
}

void Bank::addAccount(std::string name, double balance){
	
	if(count == capacity){
		capacity *= 2;
		Account* tmp = new Account[capacity];
		for(int i = 0; i < count; i++){
			tmp[i] = arr[i];
		}

		delete []arr;
		arr = tmp;
		tmp = nullptr;
		
	}

	Account obj(count, name, balance);
	arr[count] = obj;
	++count;
}

void Bank::setInformation(const int index){
	if(index >= 0 && index <= count){
		std::string name;
		std::cout << "Enter informations for User number : " << index << std::endl;
		std::cout << "Name -> "; 
		std::cin >> name;	
		arr[index].setName(name);
		
		double balance = 0;
		std::cout << "Balance -> ";
		std::cin >> balance;
		arr[index].setBalance(balance);
	}
}

void Bank::printInfo(int index){
	if(index >= 0 && index <= count){		
		arr[index].printInfo();
	}
}
