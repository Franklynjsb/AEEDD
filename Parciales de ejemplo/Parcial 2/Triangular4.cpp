#include <iostream>
using namespace std;

void cargarMatriz(int matriz[][50], int tl);
bool ElementosOrdenados (int matriz[][50], int tl);

int main(int argc, char *argv[]) {
	
	int matriz[50][50], tl;
	
	cin >> tl;
	
	cargarMatriz(matriz, tl);
	
	if (ElementosOrdenados(matriz, tl)) {
		cout << "SI" << endl;
	}else {
		cout << "NO" << endl;
	}
	
	return 0;
}

void cargarMatriz(int matriz[][50], int tl) {
	for(int i=0;i<tl;i++) { 
		for(int j=0;j<tl;j++) { 
			cin >> matriz[i][j];
		}
	}
}

bool ElementosOrdenados (int matriz[][50], int tl) {
	
	int anterior=matriz[1][0];
	
	for(int i=1;i<tl;i++) { 
		for(int j=0;j<i;j++) { 
			if(anterior>matriz[i][j]) {
				return false;
			}
			anterior=matriz[i][j];
		}
	}
	return true;
}
