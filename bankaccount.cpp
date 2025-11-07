#include "bankaccount.h"
#include <iostream>

void bankaccount::display(){
	//display account details
	std::cout << "Account name: " << name << "\n";
	std::cout << "Account number: " << number << "\n";
	std::cout << "Account balance: " << balance << "\n";
		
}

void bankaccount::withdrawMoney(double amount){
	//check if funds are sufficient
	//withdraw
}

void bankaccount::depositMoney(double amount){
	//check if funds are sufficient
	//deposit
}


