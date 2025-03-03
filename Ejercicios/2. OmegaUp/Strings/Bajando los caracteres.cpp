#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	
	string entrada;
	
	//Leer cadena de chars
	getline(cin, entrada);
	
	int iteraciones = entrada.length();
	
	for(int i=0;i<iteraciones;i++) { 
		cout << entrada[i] << endl;
	}
	
	
	
	return 0;
}

