#include <iostream>
#include "Bank.h"

Bank::Bank() : m_balance(0), m_id(0){}

Bank::Bank(std::string name, std::string password, double balance, int id) : m_name(name), m_password(password), m_balance(balance), m_id(id){}

// Getters

int Bank::getId() { return m_id; }

double Bank::getBalance() { return m_balance; }


std::string Bank::getName() { return m_name; }



// Setters

void Bank::setId(int id){
	m_id = id;
}

void Bank::setBalance(double balance)
{
        m_balance = balance;
}

void Bank::setPassword(std::string password){
	m_password = password;
}

void Bank::setName(std::string name)
{
	m_name = name;
}


// Methods

void Bank::Deposit(int money)
{
	m_balance += money;
}

void Bank::Withdraw(int money)
{
	if(m_balance >= money)
	{
		m_balance -= money;
	}
	else
	{
		return;
	}
}

void Bank::printInfo(){
	std::cout << "Name - " << m_name << std::endl;
	std::cout << "Balance - " << m_balance << std::endl;
	std::cout << std::endl;
}

