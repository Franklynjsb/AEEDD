#include <iostream>
#include <cstdlib>
using namespace std;

void LimpiarVectorFuncion (int vector[], int& tamanio);
void MayorDiferenciaFuncion (int vector[], int& mayorDiferencia, int tamanio);

int main(int argc, char *argv[]) {
	
	int vector[10]={1,2,3,4,7,9,12,14,15,20};
	
	int tamanio=10, mayorDiferencia=0;
	
	for(int i=0;i<tamanio;i++) { 
		cout << vector[i] << " ";
	}
	cout << endl;
	
	LimpiarVectorFuncion(vector, tamanio);
	
	cout << "vector Arreglado" << endl;
	for(int i=0;i<tamanio;i++) { 
		cout << vector[i] << " ";
	}
	
	cout << endl;
	
	
	MayorDiferenciaFuncion(vector, mayorDiferencia, tamanio);
	
	
	cout << "Cantidad de elementos impares eliminados: " << 10-tamanio << endl;
	
	cout << "Mayor diferencia entre dos pares sucesivos: " << mayorDiferencia << endl;	
	
	return 0;
}


void LimpiarVectorFuncion (int vector[], int& tamanio) {
	
	for(int i=1; i<10; i++){
		if( vector[i]%2!=0) {
			if((vector[i-1]%2==0) && (vector[i+1]%2==0)){
				tamanio--;
				for(int j=i; j<10; j++){
					vector[j]=vector[j+1];
				}
			}
		}
	}
	
	for (int i=tamanio; i<10; i++) {
		vector[i]=0;
	}
}

void MayorDiferenciaFuncion (int vector[], int& mayorDiferencia, int tamanio) {
	
	int diferencia=0;
	
	for(int i=1; i<tamanio; i++){
		diferencia = abs(vector[i]-vector[i-1]);
		
		if(diferencia > mayorDiferencia) {
			mayorDiferencia = diferencia;
		}
		
	}
}
