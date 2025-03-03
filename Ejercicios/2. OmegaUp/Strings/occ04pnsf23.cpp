#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	
	string palabra;
	
	//Leer cadena de chars
	getline(cin, palabra);
	
	int iteraciones = palabra.length();
	
	while (iteraciones--){
		cout << palabra[iteraciones];
	}
	cout << endl;
	
	
	
	return 0;
}

