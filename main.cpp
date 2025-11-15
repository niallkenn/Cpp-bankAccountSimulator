#include "bankaccount.h"
#include "functions.h"
#include <iostream>
#include <fstream>
#include <vector>
//foobar
int main(){	
	
	int balance;
	std::string name;
	int number;

	decryptList();
	
	int run = 1;
	int mode;
	while (1){	
		std::cout << "[1] Create account\n[2] Open account\n[else] Exit\n";
		std::cin >> mode;
		
		switch (mode){
			default:
				encryptList();
				return 0;	
			case 1:
				createAccount();
				break;
			case 2:
				openAccount();
				break;
		}
	}
}
