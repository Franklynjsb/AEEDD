#include <iostream>
using namespace std;

void cargarMatriz(int matriz[][81], int tl);
bool ElementosOrdenados (int matriz[][81], int tl);

int main(int argc, char *argv[]) {
	
	int matriz[81][81], tl;
	
	cin >> tl;
	
	cargarMatriz(matriz, tl);
	
	
	if (ElementosOrdenados(matriz, tl)) {
		cout << "SI" << endl;
	}else {
		cout << "NO" << endl;
	}
	
	return 0;
}

void cargarMatriz(int matriz[][81], int tl) {
	for(int i=0;i<tl;i++) { 
		for(int j=0;j<tl;j++) { 
			cin >> matriz[i][j];
		}
	}
}
	
bool ElementosOrdenados (int matriz[][81], int tl) {
	for(int i=0;i<tl;i++) { 
		for(int j=i+1;j<tl;j++) { 
			if(matriz[i][j]<matriz[i][j+1]) {
				return false;
			}
		}
	}
	return true;
}
