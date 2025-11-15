#ifndef BANKACCOUNT
#define BANKACCOUNT	
#include <string>
class bankaccount {
	public:
		std::string getBalance();
		void withdraw();
		void deposit();
		void withdrawAmount(int amount);
		void depositAmount(int amount);
		bankaccount(std::string balance, std::string name, std::string number): balance(balance), name(name), number(number){}
	
	private:
		std::string balance;
		std::string name;
		std::string number;
};

#endif
