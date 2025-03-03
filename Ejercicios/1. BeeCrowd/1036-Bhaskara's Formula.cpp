#include <iostream>
//Biblioteca para usar la raíz cuadrada.
#include <cmath>
//Biblioteca para usar el setprecision.
#include <iomanip>
using namespace std;

//Prototipo de la función
void BhaskaraFunction (double, double, double);

int main(int argc, char *argv[]) {
	
	//Inicializo las variables y las ingreso.
	double A,B,C;
	cin >> A >> B >> C;
	
	cout<<fixed<<setprecision(5);
	//Si a=0, o la raíz da negativa no puede calcularse.
	//Si las condiciones se cumplen se realiza el calculo.
	if ((B*B)-(4*A*C)>0 && A!=0) {
		BhaskaraFunction(A,B,C);
	}else {
		cout << "Impossivel calcular" << endl;
	}
	
	return 0;
}

//Funcion que realiza el calculo de las raices usando
//Bhaskara o Resolvente. Es lo mismo ;).
void BhaskaraFunction (double A, double B, double C){
	//Inicializo las variables donde realizo la resolvente.
	double root1 = (-B+(sqrt((B*B)-(4*A*C))))/(2*A);
	double root2 = (-B-(sqrt((B*B)-(4*A*C))))/(2*A);
	
	cout << "R1 = " << root1 <<endl;
	cout << "R2 = " << root2 <<endl;
}
