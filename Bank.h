class Bank{
	private:
		Account* arr;
		int capacity;
		int count;
	public:
		Bank();
		~Bank();
		
		void addAccount();
		void addAccount(std::string name, double balance);
		
		void setInformation(const int index);
			
		void printInfo(int index);
};
