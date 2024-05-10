#include <iostream>
#include <iomanip>
using namespace std;

//Declaración de la función creada
double FunctionMedia (double A, double B,double C);

int main(int argc, char *argv[]) {
	
	double A, B, C, media;
	
	cin >> A >> B >> C;
	
	media = FunctionMedia(A,B,C);
	
	// Establecer la precisión decimal en la salida
	cout << fixed << setprecision(1);
	//Devuelve la media calculada en la función
	cout << "MEDIA = " << media << endl;
	
	return 0;
}

//Funcion propia donde los dos valores ingresados son multiplicados entre sí
double FunctionMedia (double A, double B,double C){
	
	double media=0;
	
	// Calcular la media de los numeros ingresados
	media = (A*2+B*3+C*5) / 10.0;
	
	return media;
}
	
