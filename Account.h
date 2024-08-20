#ifndef __Account__
#define __Acount__

class Account{
	private:
		int m_number;
		std::string m_name;
		double m_balance;
	public:
		Account();
		Account(int number, std::string name, double balance);

		// Getters
		int getNumber() const;
		std::string getName() const;
		double getBalance() const;
		
		// Setters
		void setNumber(int number);
		void setName(std::string name);
		void setBalance(double balance);
		
		void Deposit(int money);
		void Withdraw(int money);	
		void printInfo();
};

#endif
