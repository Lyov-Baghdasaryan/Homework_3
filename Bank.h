class Bank{
	private:
		std::string m_name;
		std::string m_password;
		double m_balance;
		int m_id;
	public:
		Bank();
		Bank(std::string name, std::string passowrd, double balance, int id);

		// Getters
		int getId();
		double getBalance();
		std::string getPassword();
		std::string getName();
		
		// Setters
		void setId(int id);
		void setBalance(double balance);
		void setPassword(std::string password);
		void setName(std::string name);
		
		void Deposit(int money);
		void Withdraw(int money);	
		void printInfo();
};
