#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	
	string palabra;
	int contadorLetras=0;
	
	//Leer cadena de chars
	getline(cin, palabra);
	int fin = palabra.length();
	for(int i=0;i< fin;i++) { 
		if ((palabra[i] >= 'A' && palabra[i]>='Z') || (palabra[i] >= 'a' && palabra[i]>='z')) {
			contadorLetras++;
		}
	}
	
	cout << contadorLetras << endl;
	
	return 0;
}

