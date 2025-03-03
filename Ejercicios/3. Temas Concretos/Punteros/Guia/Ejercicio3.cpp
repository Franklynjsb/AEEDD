#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(int argc, char *argv[]) {
	
	int * lista, random;
	
	lista = new int[10];
	
	//Creo y guardo elementos aleatorios
	srand(time(NULL));
	for(int i=0;i<10;i++) { 
		random= rand()%10+1;
		lista[i]=random;
	}
	/////////////////////
	
	//
	cout << endl;
	//
	
	cout << "Salida de memoria : " << endl;
	//Cout mediante memoria
	for(int i=0;i<10;i++) { 
		cout << lista[i] << " ";
	}
	delete[] lista;//Limpio
	lista = NULL;//Saco el puntero
	
	return 0;
}

/*
Crear un array de 10 números aleatorios y después un array de 10 punteros donde cada uno apunte
a los números anteriores.
*/
