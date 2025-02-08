#include <iostream>
#include <iomanip> // Para establecer la precisión decimal en la salida
using namespace std;

int main(int argc, char *argv[]) {
	
	// Inicializar valores
	int number1, number2, number3, maior;
	
	// Leer los valores de entrada
	cin >> number1;
	cin >> number2;
	cin >> number3;
	
	// Calcular el mayor
	if (number1 < number2){
		if (number2 > number3) {
			maior = number2;
		}else {
			maior = number3;
		}
	}else {
		if (number1 > number3) {
			maior = number1;
		}else {
			maior = number3;
		}
	}
	
	
	// Establecer la precisión decimal en la salida
	cout<<maior<<" "<<"eh o maior"<<endl;
	
	return 0;
}
