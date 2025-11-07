#include "functions.h"
#include <fstream>
#include <vector>
#include <string>

void encryptList(){
	std::ifstream inf { "list.txt" };
	std::string line;
	std::vector<std::string> lines = {};
	while (inf >> line) {
		lines.push_back(line);
	}

	for (int i = 0; i < size(lines); i++){
		for (int j = 0; j<size(lines[i]);j++){
			lines[i][j] = (int)lines[i][j] + 19;
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
	while (inf >> line) {
		lines.push_back(line);
	}

	for (int i = 0; i < size(lines); i++){
		for (int j = 0; j<size(lines[i]);j++){
			lines[i][j] = (int)lines[i][j] - 19;
		}
	}

	inf.close();
	remove("list.txt");

	std::ofstream ouf { "list.txt" };
	
	for (int i = 0; i < size(lines); i++){
		ouf << lines[i] << "\n";
	}
}

	
