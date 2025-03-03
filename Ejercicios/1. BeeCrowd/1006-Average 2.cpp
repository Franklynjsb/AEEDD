#include <iostream>
//Biblioteca de el setprecision(x)
#include <iomanip>
using namespace std;

//Declaraci�n de la funci�n creada
double FunctionMedia (double A, double B,double C);

int main(int argc, char *argv[]) {
	
	//Incializo e ingreso el valor de la variable.
	double A, B, C, media;
	cin >> A >> B >> C;
	
	// Establecer la precisi�n decimal en la salida a una unidad
	cout << fixed << setprecision(1);
	//Devuelve la media calculada en la funci�n
	cout << "MEDIA = " << FunctionMedia(A,B,C) << endl;
	
	return 0;
}

//Funcion propia donde los dos valores ingresados son multiplicados entre s�
double FunctionMedia (double A, double B,double C){
	// Calcular la media de los numeros ingresados en la inicializaci�n
	double media=(A*2+B*3+C*5) / 10.0;
	return media;
}
	
