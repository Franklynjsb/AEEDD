#include <iostream>
#include <cstdlib>
using namespace std;

int elimOrdenar (int arreglo[], int& tamanioLogico, int& numero);
bool arregloArreglado (int arreglo[], int tamanioLogico);
bool SinMultiplos (int arreglo[], int tamanioLogico, int& numero);

void Swap (int& numero1, int& numero2);


int main(int argc, char *argv[]) {
	
	int arreglo[500], tamanioLogico=500, numero, eliminados=0;
	
	//Inicializo el arreglo con numeros randoms desde 1 hasta 100
	for(int i=0; i<tamanioLogico; i++) { 
		arreglo[i] = rand()%100+1;
	}
	
	cout << "Ingresar numero para eliminar sus multiplos: " << endl;
	cin >> numero;
	
	
	cout << "Arreglo desordenado: " << endl;
	for(int i=0;i<tamanioLogico;i++) { 
		cout << arreglo[i] << " ";
	}
	
	while (!SinMultiplos(arreglo, tamanioLogico, numero)) {
		eliminados = elimOrdenar(arreglo,tamanioLogico, numero);
	}
	
	cout << endl << endl;
	cout << "Cantidad de elementos eliminados: " << eliminados << endl;
	
	
	cout << "Arreglo ordenado: " << endl;
	for(int i=0;i<tamanioLogico;i++) { 
		cout << arreglo[i] << " ";
	}
	
	return 0;
}

//Antiguo limpiarArreglo actual limpiarArreglo+OrdenarArreglo
int elimOrdenar (int arreglo[], int& tamanioLogico, int& numero) {
	//Limpiar arreglo
	for(int i=0; i<tamanioLogico; i++){
		if((arreglo[i]%numero)== 0) {
			for(int j=i;j<tamanioLogico;j++) { 
				arreglo[j] = arreglo[j+1];
			}
			tamanioLogico--;
		}
	}
	
	//Funcion OrdenarArreglo
	while (!arregloArreglado(arreglo, tamanioLogico)) {
		for(int i=0;i<tamanioLogico;i++) { 
			if (arreglo[i]>arreglo[i+1]) {
				Swap(arreglo[i], arreglo[i+1]);
			}
		}
	}
	
	return (500 - tamanioLogico);
	
}

bool arregloArreglado (int arreglo[], int tamanioLogico) {
	for(int i=0;i<tamanioLogico;i++) { 
		if (arreglo[i]>arreglo[i+1]) {
			return false;
		}
	}
	return true;
	
}

bool SinMultiplos (int arreglo[], int tamanioLogico, int& numero) {
	for(int i=0;i<tamanioLogico;i++) { 
		if ((arreglo[i]%numero)==0) {
			return false;
		}
	}
	return true;
}


void Swap (int& numero1, int& numero2) {
	
	int aux=0;
	
	aux=numero1;
	numero1=numero2;
	numero2=aux;
}
