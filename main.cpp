#include "bankAccount.h"
#include <iostream>
#include <fstream>

int main(){
	std::ifstream inf {"accounts.txt"};
	if(!inf){
		std::ofstream ouf{"accounts.txt"};
		ouf.close();
	}
	
	float balance;
	std::string name;
	int number;

	decryptList();

	//take account info from list and assign to variables

	bankaccount acc1(balance, name, number);
	int run = 1;
	int mode;
	std::cin >> mode;
	while (run){	
		switch (mode){
			default:
				run = 0;
				break;
			case 1:
				createAccount();
				break;
			case 2:
				depositMoney();
				break;
			case 3:
				withdrawMoney();
				break;
			case 4:
				checkBalance();
				break;
		}
	}

	encryptList();
	
	return 0;
}
