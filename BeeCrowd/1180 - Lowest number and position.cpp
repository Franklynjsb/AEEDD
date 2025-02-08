#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int vector[1000], tamanioLogico, menorValor=9999, numero, posicion;
	
	cin >> tamanioLogico;
	
	for(int i=0; i<tamanioLogico; i++) { 
		cin >> numero;
		vector[i]=numero;
		
		if (numero<menorValor){
			menorValor=numero;
			posicion=i;
		}
	}
	
	cout << "Menor valor: " << menorValor << endl;
	cout << "Posicao: " << posicion;
	
	
	return 0;
}

