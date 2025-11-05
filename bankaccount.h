#ifndef BANKACCOUNT
#define BANKACCOUNT	

class bankaccount {
	public:
		void display();
		void withdraw(double amount);
		void deposit(double amount);

		bankaccount(float balance, std::string name, int number): balance(balance), name(name), number(number){}
	
	private:
		float balance;
		std::string name;
		int number;
};

#endif
