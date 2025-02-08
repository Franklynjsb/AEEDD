#include <iostream>
#include <iomanip>

using namespace std;

float Suma (float matriz[][12], int& contador);

int main(int argc, char *argv[]) {
	
	float matriz[12][12], resultado;
	int contador=0;
	char caracter;
	
	cin >> caracter;
	
	for (int i=0; i<12; i++) {
		for (int j=0; j<12; j++) {
			cin >> matriz[i][j];
		}
	}
	
	cout << fixed << setprecision(1);
	resultado=Suma(matriz, contador);
	
	if (caracter == 'S') {
		cout << resultado << endl;
	}else {
		cout << resultado/contador << endl;
	}
	
	return 0;
}

float Suma (float matriz[][12], int& contador) {
	
	float suma = 0;
	int tamanio;
	
	for (int i=1; i<12; i++) {
		
		if(i<=5) {
			for (int j=0;j<i; j++) {
				contador++;
				suma+=matriz[i][j];
			}
		}else {
			for (int j=0;j<11-i; j++) {
				contador++;
				suma+=matriz[i][j];
			}
		}
	}
	
	return suma;
}

