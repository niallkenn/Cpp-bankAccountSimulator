#include "bankaccount.h"
#include "functions.h"
#include <iostream>
#include <string>

std::string bankaccount::getBalance(){
	return balance;
}

void bankaccount::withdrawAmount(int amount){
	int bal = std::stoi(balance);
	bal -= amount;
	balance = std::to_string(bal);
}

void bankaccount::depositAmount(int amount){
	int bal = std::stoi(balance);
	bal += amount;
	balance = std::to_string(bal);
}
	
void bankaccount::withdraw(){
	int accbalance = stoi(balance);
	std::cout << "Amount: ";
	
	std::string amount;
	int iamount;	
	try {
		std::getline(std::cin, amount);
		iamount = stoi(amount);
	} catch(std::invalid_argument&){
		std::cout << "Invalid input\n";
		return;
	}

	if (iamount > accbalance){
		std::cout << "Insufficient funds\n";
		return;
	}else{
		withdrawAmount(iamount);
	}

	return;
	//check if funds are sufficient
	//withdraw
}

void bankaccount::deposit(){
	std::cout << "Amount: ";
	std::string amount;
	int iamount;
	try {	
		std::getline(std::cin, amount);
		iamount = stoi(amount);
	} catch(std::invalid_argument&){
		std::cout << "Invalid input\n";
		return;
	}

	if (iamount < otherbalances(name)){
		std::cout << "Insufficient funds\n";
		return;
	} else {
		depositAmount(iamount);
	}

	return;
}


