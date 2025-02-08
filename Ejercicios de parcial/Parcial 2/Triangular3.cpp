#include <iostream>
using namespace std;

void cargarMatriz(int matriz[][21], int tl);
bool MatrizMariposaDerecha(int matriz[][21], int tl);
bool MatrizMariposaIzquierda(int matriz[][21], int tl);

int main(int argc, char *argv[]) {
	
	int matriz[21][21], tl;
	
	cin >> tl;
	
	cargarMatriz(matriz, tl);
	
	
	if (MatrizMariposaIzquierda(matriz, tl) && MatrizMariposaDerecha(matriz, tl)) {
		cout << "SI" << endl;
	}else {
		cout << "NO" << endl;
	}
	
	return 0;
}

void cargarMatriz(int matriz[][21], int tl) {
	for(int i=0;i<tl;i++) { 
		for(int j=0;j<tl;j++) { 
			cin >> matriz[i][j];
		}
	}
}

bool MatrizMariposaIzquierda(int matriz[][21], int tl) {
	
	int mitadMatriz= tl/2, numero=matriz[0][0];
	
	for(int i=1;i<tl-1;i++) { 
		for(int j=0;j<mitadMatriz;j++) { 
			if(matriz [i][j] != numero) {
				return false;
			}
		}
	}
	
	if(matriz[tl-1][0]!=numero) {
		return false;
	}
	
	
	return true;
}
bool MatrizMariposaDerecha(int matriz[][21], int tl){
	
	int mitadMatriz= tl/2, numero=matriz[0][0];
	
	
	if (matriz[0][tl-1]!= numero) {
		return false;
	} else {
		for(int i=1;i<tl-1;i++) { 
			for(int j=tl-mitadMatriz;j<tl;j++) { 
				if(matriz [i][j] != numero) {
					return false;
				}
			}
		}
	}
	
	if(matriz[tl-1][tl-1]!=numero) {
		return false;
	}

	
	return true;
}
