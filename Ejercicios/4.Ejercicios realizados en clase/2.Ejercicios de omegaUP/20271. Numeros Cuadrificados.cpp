#include <iostream>

using namespace std;

int cuadrificar(int x) {
	int resultado = 0;
	int multiplicador = 1;
	
	while (x > 0) {
		int digito = x % 10;
		int nuevo_digito = (digito * digito) % 10;
		
		resultado = resultado + (nuevo_digito * multiplicador);
		multiplicador = multiplicador * 10;
		x = x / 10;
	}
	
	return resultado;
}

int main() {
	int n, primerNum, segundoNum, numeroCuadrificado;
	cin >> n;
	
	for(int i=0;i<n;i++) { 
		
		cin >> primerNum>> segundoNum;
		
		numeroCuadrificado = cuadrificar(primerNum);
		
		if ( numeroCuadrificado == segundoNum) {
			cout << segundoNum << " es correcto\n";
		} else {
			cout << segundoNum << " no es correcto\n";
		}
	}
	
	return 0;
}
