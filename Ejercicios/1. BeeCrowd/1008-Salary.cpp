#include <iostream>
#include <iomanip> // Para establecer la precisión decimal en la salida
using namespace std;

int main(int argc, char *argv[]) {
	
	// Inicializar valores
	double employeeNumber, workedHours, amountPerHour, salary;
	
	// Leer los valores de entrada
	cin >> employeeNumber;
	cin >> workedHours;
	cin >> amountPerHour;
	
	// Calcular el salario
	salary= workedHours * amountPerHour;
	
	
	// Establecer la precisión decimal en la salida
	cout << fixed << setprecision(0);
	// Imprimir el resultado
	cout<< "NUMBER = "<<employeeNumber<<endl;
	
	cout << fixed << setprecision(2);
	cout<< "SALARY = U$ "<<salary<<endl;
	
	return 0;
}
