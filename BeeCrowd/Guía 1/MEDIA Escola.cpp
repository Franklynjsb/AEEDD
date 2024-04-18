#include <iostream>
#include <iomanip> // Para establecer la precisión decimal en la salida
using namespace std;

int main(int argc, char *argv[]) {
	
	// Inicializar valores
	double A, B, C, media;
	
	// Leer los valores de entrada
	cin>>A;
	cin>>B;
	cin>>C;
	
	// Calcular la media de los numeros ingresados
	media = (A*2+B*3+C*5)/ (2 + 3 + 5);
	
	
	// Establecer la precisión decimal en la salida
	cout << fixed << setprecision(1);
	
	// Imprimir el resultado
	cout<< "MEDIA = "<<media<<endl;
	
	return 0;
}

