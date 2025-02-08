#include <iostream>
#include <iomanip>

using namespace std;
double funcionRaizDe2 (int);

int main(int argc, char *argv[]) {
	
	int N;//Numero a ingresar
	
	cin >> N;
	
	//Funcion representada en una variable
	double raizcalculada = 1.0 + funcionRaizDe2(N);
	
	cout << fixed << setprecision(10);
	
	cout << raizcalculada <<endl;
	
	return 0;
}

//Recursiva para la parte fraccionaria
double funcionRaizDe2 (int N){
	if (N==0){
		return 0.0;
	}else {
		return 1.0/(2.0 + funcionRaizDe2(N-1));
	}
}
	
