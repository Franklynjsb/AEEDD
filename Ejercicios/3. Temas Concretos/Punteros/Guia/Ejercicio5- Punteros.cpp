#include <iostream>
using namespace std;

void Swap (char &uno, char &dos);

int main(int argc, char *argv[]) {
	
	char palabra[5] = {'p','e','r','r','o'};
	char * puntero = palabra;
	
	for(int k=0;k<5;k++) { 
		for(int i=k;i<5;i++) {
			Swap(*(puntero+k), *(puntero+i));
		};
	}
	
	for(int i=0;i<5;i++) { 
		cout << palabra[i];
	};
	
	return 0;
}

/*
Dada una cadena, invertirla haciendo uso de la aritmética de punteros.
*/

void Swap (char &uno, char &dos) {
	char aux = uno;
	uno = dos;
	dos=aux;
}
