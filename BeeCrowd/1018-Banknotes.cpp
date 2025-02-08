#include <iostream>
#include <iomanip> // Para establecer la precisión decimal en la salida
using namespace std;

int main(int argc, char *argv[]) {
	
	// Inicializar valores
	int valueForCalculate;
	//Inicializar valores para divisiones
	int bankNotes[] = {100, 50, 20, 10, 5, 2, 1}, quantities[7]={0};
	
	// Leer los valores de entrada
	cin >> valueForCalculate;
	
	// Calcular la distancia
	for (int i=0 ; i<7 ; i++){
		quantities[i] = valueForCalculate/bankNotes[i];
		valueForCalculate%=bankNotes[i];
	}
	//Imprimir resultado
	cout;
	for (int i=0 ; i<7 ; i++){
		cout << quantities[i] << " nota(s) de R$ " << bankNotes[i] << ",00" << endl;
	}
	
	return 0;
}
