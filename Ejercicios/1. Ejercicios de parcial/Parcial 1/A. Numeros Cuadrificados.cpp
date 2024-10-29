#include <iostream>
using namespace std;

long funcionCuadrificar(int);

int main(int argc, char *argv[]) {
	
	int T = 0; // cantidad de tests
	
	int X = 0, Y = 0; // Números a comparar la cantidad de dígitos
	
	cin >> T;
	
	while (T--) {
		
		cin >> X >> Y; 
		
		
		
		if (funcionCuadrificar(X) == Y) {
			cout << Y << " es correcto" << endl;
		} else {
			cout << Y << " no es correcto" << endl;
		}
	}
	
	return 0;
}

// Usando long por los numeros que escapan al limite de int
long funcionCuadrificar(int numero) {
	
	long result = 0;
	long factor = 1;
	
	while (numero > 0) {
		
		int digit = numero % 10;
		int cuadrificado = (digit * digit) % 10;
		
		result += cuadrificado * factor;
		factor *= 10;
		numero /= 10;
	}
	
	return result;
}
