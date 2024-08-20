#include <iostream>
#include "Account.h"

Account::Account() : m_balance(0), m_number(0){}

Account::Account(int number, std::string name, double balance) : m_number(number), m_name(name), m_balance(balance) {}

// Getters

int Account::getNumber() const{ return m_number; }

std::string Account::getName() const{ return m_name; }

double Account::getBalance() const{ return m_balance; }

// Setters

void Account::setNumber(int number){
	m_number = number;
}

void Account::setName(std::string name){
	m_name = name;
}

void Account::setBalance(double balance)
{
        m_balance = balance;
}

// Methods

void Account::Deposit(int money)
{
	m_balance += money;
}

void Account::Withdraw(int money)
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

void Account::printInfo(){
	std::cout << "Number - " << m_number << std::endl;
	std::cout << "Name - " << m_name << std::endl;
	std::cout << "Balance - " << m_balance << "$" << std::endl;
	std::cout << std::endl;
}

