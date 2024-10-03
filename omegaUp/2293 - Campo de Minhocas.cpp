#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int filas, columnas, numero, matriz[101][101]={0}, suma=0, lombrices=0;
	
	cin >> filas >> columnas;
	
	for (int i=0; i<filas; i++) {
		for (int j=0; j<columnas; j++) {
			cin >>numero;
			matriz[i][j]=numero;
		}
	}
	
	for (int i=0; i<filas; i++) {
		
		for (int j=0; j<columnas; j++) {
			suma+=matriz[i][j];
			if(suma>lombrices) {
				lombrices=suma;
			}
		}
		
		suma=0;
		
		for (int j=0; j<filas; j++) {
			suma+=matriz[j][i];
			if(suma>lombrices) {
				lombrices=suma;
			}
		}
		
		suma=0;
		
	}
	
	cout << lombrices << endl;
	
	return 0;
}

