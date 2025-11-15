#include "bankaccount.h"
#include "functions.h"
#include <iostream>

void bankaccount::display(){
	//display account details
	std::cout << "Account balance: " << balance << "\n";
}

void bankaccount::withdrawMoney(int amount){
	//check if funds are sufficient
	//withdraw
}

void bankaccount::depositMoney(int amount){
	//check if funds are sufficient
	//deposit
}


