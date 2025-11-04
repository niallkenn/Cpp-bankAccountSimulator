#include <iostream>

int main(){
	int mode;
	std::cin >> mode;
	
	switch (mode){
		default:
			return 0;
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
