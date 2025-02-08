#include <iostream>
#include <iomanip> // Para establecer la precisión decimal en la salida
#include <cmath> //Para usar el sqrt
using namespace std;

int main(int argc, char *argv[]) {
	
	// Inicializar valores
	double x1, y1, x2, y2, distance;
	
	// Leer los valores de entrada
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	
	// Calcular la distancia
	distance = sqrt (pow((x2-x1),2)+pow((y2-y1),2));
	
	
	// Establecer la precisión decimal en la salida
	cout<<fixed<<setprecision(4);
	cout<<distance<<endl;
	
	return 0;
}
