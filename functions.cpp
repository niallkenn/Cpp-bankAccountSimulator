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
	std::cin.ignore();
	std::ifstream inf { "list.txt" };
	std::vector<std::string> lines;
	std::string line;
	while(std::getline(inf, line)) {
		if (!line.empty()) lines.push_back(line);
	}

	inf.close();

	if (size(lines) == 0){
		std::cout << "Create an account first\n";
		return;
	}
	
	int index = 1;

	for (int i = 0; i < size(lines); i++){
		if (i % 3 == 0){
			std::cout << index << ". " << lines[i] << std::endl;
		index++;
		}
	}
	index--;
	std::cout << "Choose account:\n";
	int chooseacc;
	std::string numberentered;
	std::cin >> chooseacc;
	
	if (chooseacc > index || chooseacc < 1){
		std::cout << "Number out of range\n";
		return;
	}
	
	std::string namechosen = lines[3*index-3];
	std::string accnumber = lines[3*index-1];

	std::cout << "Enter account number for: " << namechosen << "\n";
	std::cin >> numberentered;

	if (numberentered != accnumber){
		std::cout << "Invalid account number\n";
		return;
	} else {
		// account opened !!!!!!!!
 	}
	return;
}
