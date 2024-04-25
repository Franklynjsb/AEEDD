#include <iostream>

using namespace std;

int main() {
	double A, B, C;
	
	// Leer los tres lados del tri�ngulo
	cin >> A >> B >> C;
	
	// Ordenar los lados de manera decreciente
	if (A < B) {
		swap(A, B);
	}
	if (A < C) {
		swap(A, C);
	}
	if (B < C) {
		swap(B, C);
	}
	
	// Verificar si es un tri�ngulo
	if (A >= B + C) {
		cout << "NAO FORMA TRIANGULO" << endl;
	} else {
		// Clasificar el tipo de tri�ngulo
		if (A*A == B*B + C*C) {
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if (A*A > B*B + C*C) {
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		if (A*A < B*B + C*C) {
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		if (A == B && B == C) {
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		if ((A == B && B != C) || (B == C && C != A) || (A == C && C != B)) {
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
	
	return 0;
}
