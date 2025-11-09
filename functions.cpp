#include "functions.h"
#include "bankaccount.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>

void encryptList(){
	std::ifstream inf { "list.txt" };
	std::string line;
	std::vector<std::string> lines = {};
	while (std::getline(inf, line)) {
		if(!line.empty()) lines.push_back(line);
	}

	for (int i = 0; i < size(lines); i++){
		for (int j = 0; j<size(lines[i]);j++){
			lines[i][j] = (int)lines[i][j] + 31;
		}
	}

	inf.close();
	remove("list.txt");

	std::ofstream ouf { "list.txt" };
	
	for (int i = 0; i < size(lines); i++){
		ouf << lines[i] << "\n";
	}
}

void decryptList(){
	std::ifstream inf { "list.txt" };
	std::string line;
	std::vector<std::string> lines = {};
	while (std::getline(inf, line)) {
		if(!line.empty()) lines.push_back(line);
	}

	for (int i = 0; i < size(lines); i++){
		for (int j = 0; j<size(lines[i]);j++){
			lines[i][j] = (int)lines[i][j] - 31;
		}
	}

	inf.close();
	remove("list.txt");

	std::ofstream ouf { "list.txt" };
	
	for (int i = 0; i < size(lines); i++){
		ouf << lines[i] << "\n";
	}
}

void createAccount(){
	std::string name;
	
	std::cout << "Account name: ";
	std::cin.ignore();
	std::getline(std::cin, name);

	std::srand(std::time(0));	
	int accnumber = std::rand() % 1000001;
	std::cout << "Your account number is: " << accnumber;
	std::cout << "\nYou will need it to access your account so take note of it\n";

	std::ofstream ouf { "list.txt", std::ios::app };
	ouf << name << "\n";	
	ouf << 0 << "\n";
	ouf << accnumber << "\n";
	ouf.close(); 
}

void openAccount(){

}

	
