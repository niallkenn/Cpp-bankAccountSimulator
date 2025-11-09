#include "bankaccount.h"
#include "functions.h"
#include <iostream>
#include <fstream>
#include <vector>

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
		
		if (mode == 1){
			createAccount();
		}else if (mode == 2){
			openAccount();
		}else {
			encryptList();
			return 0;
		}
	}
}
