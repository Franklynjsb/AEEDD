#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//Iniciamos en 2 para poder evitar analizar el valor 1 en vano.
	for (int i=2; i<=100; i++) {
		//Si es par imprime los valores en la pantalla
		if (i%2==0) {
			cout << i <<endl;
		}
	}
	
	return 0;
}

