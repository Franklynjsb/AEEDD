#include <iostream>
#include <string>

using namespace std;

bool esPrimordial(int n);
int StringANum (string entrada);
int main() {
	
	string entrada;
	int cantidadProcesados = 0;
	int mayorPrimordial = -1;
	
	while (cin >> entrada, entrada != "FIN") {
		
		cantidadProcesados++;
		
		int n = StringANum(entrada);
		
		if (esPrimordial(n)) {
			cout << n << " ACEPTADO\n";
			if (n > mayorPrimordial) {
				mayorPrimordial = n;
			}
		} else {
			cout << n << " NO PRIMORDIAL\n";
		}
	}
	

	cout << cantidadProcesados << "\n";
	if (mayorPrimordial == -1) {
		cout << "SIN PRIMORDIALES\n";
	} else {
		cout << mayorPrimordial << "\n";
	}
	
	return 0;
}

int StringANum (string entrada) {
	
	int resultado = 0;
	
	for(int i=0;i<entrada.length();i++) { 
		resultado = (resultado*10)+(entrada.at(i)-'0');
	}
	return resultado;
}

bool esPrimordial(int n) {
	
	int auxiliar = n;
	int numDigitos = 0;
	bool resultado = true;
	
	//contador digs
	while (auxiliar > 0) {
		numDigitos++;
		auxiliar = auxiliar / 10;
	}
	////////
	int centroDer = (numDigitos / 2) + (numDigitos % 2);
	int centroIzq = (numDigitos / 2) + 1;
	
	auxiliar = n;
	int pos = 1;
	int valDer = -1;
	int valIzq = -1;
	
	//
	int digito;
	while (auxiliar > 0) {
		digito = auxiliar % 10;
		
		// par en par
		if (pos % 2 == 0 && digito % 2 != 0) {
			resultado = false;
		}
		
		if (pos == centroDer) valDer = digito;
		if (pos == centroIzq) valIzq = digito;
		
		pos++;
		auxiliar = auxiliar / 10;
	}
	////////
	
	if(resultado){//Si tiene chances de ser primordial continuo
		
		//Centro fuerte
		int posCentroFuerte = centroIzq;
		int valCentroFuerte = valIzq;
		if (valDer > valIzq) {
			posCentroFuerte = centroDer;
			valCentroFuerte = valDer;
		} 
		////////
		
		// Suma de digitos
		auxiliar = n;
		pos = 1;
		int sumaIzquierda = 0;
		
		while (auxiliar > 0) {
			int d = auxiliar % 10;
			
			if (pos > posCentroFuerte) {
				sumaIzquierda = sumaIzquierda + d;
			}
			pos++;
			auxiliar = auxiliar / 10;
		}
		////////
		
		if(valCentroFuerte <= sumaIzquierda) resultado = false;
	}
	
	return resultado;
}
