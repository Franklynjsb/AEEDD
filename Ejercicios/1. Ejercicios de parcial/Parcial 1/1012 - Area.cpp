#include <iostream>
#include <iomanip>

#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	
	double A, B, C, raiz, formulaR1, formulaR2;
	
	cin >> A >> B >> C;
	
	raiz =(sqrt((B*B)-(4*A*C)));
	
	formulaR1 = (((-1)*B)+raiz)/2*A;
	formulaR2 = (((-1)*B)-raiz)/2*A;
	
	if(A==0){
		cout << "Impossivel calcular" << endl;
	}else {
		cout << fixed << setprecision(5);
		cout << "R1 = " << formulaR1 << endl;
		cout << "R2 = " << formulaR2 << endl;
	}
	
	return 0;
}

