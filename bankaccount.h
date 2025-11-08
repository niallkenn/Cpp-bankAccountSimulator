#ifndef BANKACCOUNT
#define BANKACCOUNT	
#include <string>
class bankaccount {
	public:
		void display();
		void withdrawMoney(int amount);
		void depositMoney(int amount);

		bankaccount(int balance, std::string name, int number): balance(balance), name(name), number(number){}
	
	private:
		int balance;
		std::string name;
		int number;
};

#endif
