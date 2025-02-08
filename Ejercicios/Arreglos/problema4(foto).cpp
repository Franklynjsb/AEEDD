#include <iostream>
using namespace std;

void CrearMatriz (int matriz[][6]);

int main(int argc, char *argv[]) {
	
	int matriz[6][6]={1};
	
	CrearMatriz(matriz);
	
	for(int i=0;i<6;i++) { 
		for(int j=0;j<6;j++) { 
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

void CrearMatriz (int matriz[][6]) {
	
	
	int fila=0, inicioFila=0, inicioCOlumna=1, finFila=6, finColumna=6;
	
	for (int i=fila; i<finFIla, i++) {
		for (int j=columna; j<finColumna; j++) {
			matriz[i][j]+=contador;
			contador++;
		}
	}
	
	
}
