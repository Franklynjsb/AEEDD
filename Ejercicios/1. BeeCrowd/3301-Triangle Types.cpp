#include <iostream>

using namespace std;

int main() {
	float A, B, C;
	cin >> A >> B >> C;
	
	// Reparto usando el temp para ordenarlos de mayor a menor
	float temp;
	
	if (A < B) {
		temp = A;
		A = B;
		B = temp;
	}
	if (A < C) {
		temp = A;
		A = C;
		C = temp;
	}
	if (B < C) {
		temp = B;
		B = C;
		C = temp;
	}
	
	//COMPARO PARA DEFINIR SI NO ES UN TRIANGULO
	if (A >= B + C) {
		cout << "NAO FORMA TRIANGULO" << endl;
		
	//SI LO ÉS SE DEFINE EL TIPO
	} else {
		if (A * A == B * B + C * C) {
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if (A * A > B * B + C * C) {
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		if (A * A < B * B + C * C) {
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		//LUEGO DE DEFINIR EL TIPO SE DEFINE EL SUBTIPO
		if (A == B && B == C) {
			cout << "TRIANGULO EQUILATERO" << endl;
		} else if (A == B || B == C || A == C) {
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
	
	return 0;
}
