#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numero;
	string texto;
	
	cin >> numero;
	cin.ignore();
	getline(cin, texto);
	
	
	cout << "numero: "<< numero << " string: " << texto;
	
	return 0;
}

