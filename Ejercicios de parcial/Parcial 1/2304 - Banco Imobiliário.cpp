#include <iostream>

using namespace std;

int main() {
	int initialMoney, numOperations;
	cin >> initialMoney >> numOperations;
	
	
	int balanceD = initialMoney, balanceE = initialMoney, balanceF = initialMoney;
	
	for (int i = 0; i < numOperations; ++i) {
		char operation;
		cin >> operation;
		if (operation == 'C') {
			char player;
			int amount;
			cin >> player >> amount;
			if (player == 'D')
				balanceD -= amount;
			else if (player == 'E')
				balanceE -= amount;
			else if (player == 'F')
				balanceF -= amount;
		}
		else if (operation == 'V') {
			char player;
			int amount;
			cin >> player >> amount;
			if (player == 'D')
				balanceD += amount;
			else if (player == 'E')
				balanceE += amount;
			else if (player == 'F')
				balanceF += amount;
		}
		else if (operation == 'A') {
			char receiver, payer;
			int amount;
			cin >> receiver >> payer >> amount;
			if (receiver == 'D')
				balanceD += amount;
			else if (receiver == 'E')
				balanceE += amount;
			else if (receiver == 'F')
				balanceF += amount;
			
			if (payer == 'D')
				balanceD -= amount;
			else if (payer == 'E')
				balanceE -= amount;
			else if (payer == 'F')
				balanceF -= amount;
		}
	}
	cout << balanceD << " " << balanceE << " " << balanceF << endl;
	
	return 0;
}
