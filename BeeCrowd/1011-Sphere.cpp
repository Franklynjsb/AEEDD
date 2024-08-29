#include <iostream>
//Biblioteca de el setprecision(x)
#include <iomanip>

//Prototipo de función
double VolumeFunction(double);

using namespace std;

int main(int argc, char *argv[]) {
	
	//Incializo e ingreso el valor de la variable.
	double radius;
	cin >> radius;
	
	//Devuelvo el valor con 3 valores luego de la coma
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << VolumeFunction(radius) <<endl;
	
	return 0;
}

//Función que calcula el volumen de la esfera.
double VolumeFunction(double Radius){
	double PI = 3.14159;
	//Según el valor ingresado calculo el volumen de la esfera
	double volume = (4.0/3)* PI * (Radius*Radius*Radius);
	//Retorno dicho valor como resultado de la función
	return volume;
}
	
