#include <iostream>
#include <cstdlib>
using namespace std;

void LimpiarMultiplos (int arreglo[], int& tamanioLogico, int numero);
void OrdenarVector (int arreglo[], int& tamanioLogico);
bool arregloArreglado (int arreglo[], int tamanioLogico);
bool SinMultiplos (int arreglo[], int tamanioLogico, int numero);

void Swap (int& numero1, int& numero2);


int main(int argc, char *argv[]) {
	
	int arreglo[500], tamanioLogico=500, numero;
	cin>>numero;
	
	//Inicializo el arreglo con numeros randoms desde 1 hasta 100
	for(int i=0; i<tamanioLogico; i++) { 
		arreglo[i] = rand()%100+1;
	}
	
	cout << "Arreglo Inicial: " << endl;
	for(int i=0;i<tamanioLogico;i++) { 
		cout << arreglo[i] << " ";
	}
	cout << endl << endl;
	
	cout << "Ingrese un numero para eliminar sus multiplos: " << endl;
	cout << "Cambiar esto para ingresar uno distinto a 3 xD" << endl;
	
	
	/*	cout << "Eliminando multiplos de 3: " << endl << endl;*/
	
	OrdenarVector(arreglo, tamanioLogico);

	LimpiarMultiplos(arreglo,tamanioLogico, numero);
	
	
	
	cout << "Arreglo Sin multiplos: " << endl;
	for(int i=0;i<tamanioLogico;i++) { 
		cout << arreglo[i] << " ";
	}
	cout << endl << endl;
	
	cout << "Cantidad de elementos eliminados: " << 500-tamanioLogico << endl;
	
	
	
	cout << endl << endl;
	
	
	
	cout << "Arreglo ordenado: " << endl;
	for(int i=0;i<tamanioLogico;i++) { 
		cout << arreglo[i] << " ";
	}
	
	return 0;
}


void LimpiarMultiplos (int arreglo[], int& tamanioLogico, int numero) {

	for(int i=0; i<tamanioLogico; i++){
		
		
		while((arreglo[i]%numero)==0 and i<tamanioLogico){
			
			if((arreglo[i]%numero)== 0) {
				
				for(int j=i;j<tamanioLogico;j++) { 
					arreglo[j] = arreglo[j+1];
				}
				tamanioLogico--;
			}
			
		}
		
	}
	
}

void OrdenarVector (int arreglo[], int& tamanioLogico) {
	
	while (!arregloArreglado(arreglo, tamanioLogico)) {
		for(int i=0;i<tamanioLogico;i++) { 
			if (arreglo[i]>arreglo[i+1]) {
				Swap(arreglo[i], arreglo[i+1]);
			}
		}
	}
}

bool arregloArreglado (int arreglo[], int tamanioLogico) {
	for(int i=0;i<tamanioLogico;i++) { 
		if (arreglo[i]>arreglo[i+1]) {
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
