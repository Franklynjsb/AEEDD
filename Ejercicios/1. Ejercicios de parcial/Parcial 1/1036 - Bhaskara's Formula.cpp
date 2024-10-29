#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void bhaskara (double, double, double, double);

int main(int argc, char *argv[]) {
	
	double A, B, C, raiz;
	
	cin >> A >> B >> C;
	
	raiz = (B*B)-(4*A*C);
	
	cout << fixed << setprecision(5);
	if(raiz < 0 || A==0){
		cout << "Impossivel calcular" <<endl;
	} else {
		bhaskara (A, B, C, raiz);
	}
	
	
	
	return 0;
}

void bhaskara (double A, double B, double C, double raiz) {
	
	double formulaN, formulaP;
	
	formulaN= ((-B)-sqrt(raiz))/(2*A);
	formulaP= ((-B)+sqrt(raiz))/(2*A);
	
	cout << "R1 = " << formulaP << endl;
	cout << "R2 = " << formulaN << endl;
	
}
