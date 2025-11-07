#include "bankaccount.h"
#include "functions.h"
#include <iostream>
#include <fstream>
#include <vector>

int main(){	
	std::ifstream inf { "list.txt" };
	
	float balance;
	std::string name;
	int number;

	decryptList();
	
	std::string line;
	std::vector<std::string> lines = {};
	while (inf >> line){
		lines.push_back(line);
	}
	inf.close();
	
	lines[0].pop_back();
	balance = std::stof(lines[0]);
	name = lines[1];
	number = std::stoi(lines[2]);	

	bankaccount acc1(balance, name, number);
	int run = 1;
	int mode;
	while (1){	
		std::cin >> mode;
		switch (mode){
			default:
				encryptList();
				return 0;
			case 1:
				std::cout << "hello\n";
//				createAccount();
				break;
			case 2:
				std::cout << "hello\n";
//				depositMoney();
				break;
			case 3:
				std::cout << "hello\n";
//				withdrawMoney();
				break;
			case 4:
				std::cout << "hello\n";
				acc1.display();
				break;
		}
	}
}
