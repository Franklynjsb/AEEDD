#include <iostream>
#include <cstdlib>
using namespace std;

int CantidadRepetidos (int arreglo[], int tamanioLogico);
void Swap (int& numero1, int& numero2);

int main(int argc, char *argv[]) {
	
	int arreglo[1500], tamanioLogico=1500;
	
	//Inicializo el arreglo con numeros randoms hasta 150
	for(int i=0; i<tamanioLogico; i++) {
		arreglo[i] = rand()%150+1;
	}
	
	for(int i=0; i<tamanioLogico; i++) { 
		cout << arreglo[i] << " " ;
	}
	cout << endl << endl;
	
	cout << "La cantidad de repetidos mas de 10 veces son: " << CantidadRepetidos(arreglo, tamanioLogico) <<endl;
	
	return 0;
}

int CantidadRepetidos (int arreglo[], int tamanioLogico) {
	
	int contador[1501]={0}, repetidos=0;
	
	for(int i=0; i<tamanioLogico; i++) { 
		for(int j=1;j<=1500;j++) { 
			if(arreglo[i]==j) {
				contador[j]++;
			}
		}
	}
	
	for(int i=1; i<=1500; i++) {
		if(contador[i]>10) {
			repetidos++;
		}
	}
	
	return repetidos;
}

void OrdenarVector (int arreglo[], int& tamanioLogico) {
	
	for(int i=0;i<tamanioLogico;i++) { 
		if (arreglo[i]>arreglo[i+1]) {
			Swap(arreglo[i], arreglo[i+1]);
		}
		
		
	}
}

void Swap (int& numero1, int& numero2) {
	
	int aux=0;
	
	aux=numero1;
	numero1=numero2;
	numero2=aux;
}
