#include <iostream>
using namespace std;

void swap (int& numero1, int& numero2);
void cargarMatriz (int matriz[][21], int filas);
int cuartetaDiagonal(int matriz[][21],int filas, int inicio);
void swapFilas (int matriz[][21], int filas);
void swapColumnas (int matriz[][21], int filas);
void mostrarMatriz(int matriz[][21], int filas);

int main(int argc, char *argv[]) {
	
	int matriz[21][21]{}, filas, inicio=0;
	
	cin >> filas;
	
	cargarMatriz(matriz, filas);
	int cuartetas = cuartetaDiagonal(matriz, filas, inicio);
	
	
	if (cuartetas>0) {
		if ((cuartetas)%2==0) {
			swapFilas(matriz, filas);
		} else {
			swapColumnas(matriz, filas);
		}
		
	}
	cout << endl;
	
	mostrarMatriz(matriz, filas);
	
	return 0;
}

void mostrarMatriz(int matriz[][21], int filas) {
	for(int i=0;i<filas;i++) { 
		for(int j=0;j<filas;j++) { 
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

int cuartetaDiagonal(int matriz[][21],int filas, int inicio) {
	int i=inicio;
	
	if (i>=filas) {
		return 0;
	}else {
		if ((matriz[i][i]%2!=0) && (matriz[i][i+1]%2!=0) && (matriz[i+1][i]%2!=0) && (matriz[i+1][i+1]%2!=0)) {
			return 1 + cuartetaDiagonal(matriz, filas, inicio+1);
		}else {
			return 0 + cuartetaDiagonal(matriz, filas, inicio+1);
		}
	}
	
}



void cargarMatriz (int matriz[][21], int filas){
	for(int i=0;i<filas;i++) { 
		for(int j=0;j<filas;j++) { 
			cin >> matriz[i][j];
		}
	}
}
	
	
void swapFilas (int matriz[][21], int filas) {
	for(int i=0;i<filas;i++) { 
		
		swap (matriz[0][i], matriz[filas-1][i]);
		
	}
}
	
	
void swapColumnas (int matriz[][21], int filas) {
	
	for(int i=0;i<filas;i++) { 
		
		swap (matriz[i][0], matriz[i][filas-1]);
		
	}
	
	
}
	
	void swap (int& numero1, int& numero2) {
		int aux=numero1;
		numero1=numero2;
		numero2=aux;
	}
