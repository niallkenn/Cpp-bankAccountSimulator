#ifndef BANKACCOUNT
#define BANKACCOUNT	
#include <string>
class bankaccount {
	public:
		void display();
		void withdrawMoney(int amount);
		void depositMoney(int amount);

		bankaccount(std::string balance, std::string name, std::string number): balance(balance), name(name), number(number){}
	
	private:
		std::string balance;
		std::string name;
		std::string number;
};

#endif
