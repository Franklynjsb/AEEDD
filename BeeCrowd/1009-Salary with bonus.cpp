#include <iostream>
#include <iomanip> // Para establecer la precisión decimal en la salida
using namespace std;

int main(int argc, char *argv[]) {
	
	// Inicializar valores
	string sellerName;
	double fixedSalary, saleTotal, salary;
	
	// Leer los valores de entrada
	cin >> sellerName;
	cin >> fixedSalary;
	cin >> saleTotal;
	
	// Calcular el salario
	salary= (saleTotal*0.15)+fixedSalary;
	
	
	// Establecer la precisión decimal en la salida
	cout << fixed << setprecision(2);
	cout<< "TOTAL = R$ "<<salary<<endl;
	
	return 0;
}
