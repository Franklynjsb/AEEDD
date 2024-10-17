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
	int tamanio=11;
	
	for (int i=1; i<12; i++) {
		for (int j=tamanio;j<12; j++) {
			contador++;
			suma+=matriz[i][j];
		}
		tamanio--;
	}
	
	return suma;
}
