#include <iostream>
#include <iomanip>

using namespace std;

double Suma (double matriz[][12], int& contador);

int main(int argc, char *argv[]) {
	
	double matriz[12][12], resultado;
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

double Suma (double matriz[][12], int& contador) {
	
	double suma = 0;
	int tamanio=5;
	
	for (int i=7; i<12; i++) {
		for (int j=tamanio;j<i; j++) {
			contador++;
			suma+=matriz[i][j];
		}
		tamanio--;
	}
	
	return suma;
}

