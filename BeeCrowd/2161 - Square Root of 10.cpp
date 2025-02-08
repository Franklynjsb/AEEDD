#include <iostream>
#include <iomanip>

using namespace std;
double funcionRaizDe10 (int);

int main(int argc, char *argv[]) {
	
	int N; //Numero a ingresar
	
	cin >> N;
	
	//Funcion representada en una variable
	double raizcalculada = 3.0 + funcionRaizDe10(N);
	
	cout << fixed << setprecision(10);

	cout << raizcalculada <<endl;
	
	return 0;
}

//Recursiva para la parte fraccionaria
double funcionRaizDe10 (int N){
	if (N==0){
		return 0.0;
	}else {
		return 1.0/(6.0 + funcionRaizDe10(N-1));
	}
}
