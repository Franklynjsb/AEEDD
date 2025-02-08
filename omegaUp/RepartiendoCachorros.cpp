#include <iostream>
using namespace std;

int main() {
	int totalCachorros, cachorrosPancho, hijos;
	cin >> totalCachorros >> cachorrosPancho >> hijos;
	
	int cachorrosParaRepartir = totalCachorros - cachorrosPancho;
	int cachorrosParaPancho = cachorrosPancho + cachorrosParaRepartir % (hijos + 1);
	
	cout << cachorrosParaPancho<< endl;
	
	return 0;
}
