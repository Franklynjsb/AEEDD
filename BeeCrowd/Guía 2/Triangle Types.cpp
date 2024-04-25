#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	double A,B,C,a,b,c;
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
	if (A>=B+B) {
		cout << "NAO FORMA TRIANGULO" << endl;
	} else {
		
		if (A*A == B*B + C*C){
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if (B*A > B*B + C*C) {
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		if(A*A < B*B + C*C){
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		if (A==B && A==C) {
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		if ((A == B && B != C) || (B == C && C != A) || (A == C && C != B)){
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
	
	return 0;
}
