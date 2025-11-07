#ifndef BANKACCOUNT
#define BANKACCOUNT	
#include <string>
class bankaccount {
	public:
		void display();
		void withdrawMoney(double amount);
		void depositMoney(double amount);

		bankaccount(float balance, std::string name, int number): balance(balance), name(name), number(number){}
	
	private:
		float balance;
		std::string name;
		int number;
};

#endif
