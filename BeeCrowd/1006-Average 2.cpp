#include <iostream>
//Biblioteca de el setprecision(x)
#include <iomanip>
using namespace std;

//Declaración de la función creada
double FunctionMedia (double A, double B,double C);

int main(int argc, char *argv[]) {
	
	//Incializo e ingreso el valor de la variable.
	double A, B, C, media;
	cin >> A >> B >> C;
	
	// Establecer la precisión decimal en la salida a una unidad
	cout << fixed << setprecision(1);
	//Devuelve la media calculada en la función
	cout << "MEDIA = " << FunctionMedia(A,B,C) << endl;
	
	return 0;
}

//Funcion propia donde los dos valores ingresados son multiplicados entre sí
double FunctionMedia (double A, double B,double C){
	// Calcular la media de los numeros ingresados en la inicialización
	double media=(A*2+B*3+C*5) / 10.0;
	return media;
}
	
