#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string nombre, mayorNombre = "SIN OFRENDAS ACEPTADAS";
	double p, valor;
	double mayorValor = -1.0;
	char m;
	int d;
	int peregrinosValidos = 0, aceptados = 0; 
	bool valido;
	cout << fixed << setprecision(2);
	
	while (cin >> nombre && nombre != "FIN") {
		cin >> p >> m >> d;
		
		valido = true;
		
		if (nombre.length() < 4) {
			valido = false;
		} else {
			for (int i = 0; i < nombre.length(); i++) { 
				if (nombre.at(i) >= '0' && nombre.at(i) <= '9') {
					valido = false;
				}
			}
		}
		
		if (!valido) {
			cout << nombre << " -> NOMBRE PROFANO\n";
		} else {
			peregrinosValidos++;
			
			if (m == 'O' || m == 'o') {
				valor = p * 10.00;
			} else if (m == 'P' || m == 'p') {
				valor = p * 5.00;
			} else {
				valor = p * 2.00;
			}
			
			if (d > 100) {
				valor += 15.00;
			}
			
			if (valor >= 50.00) {
				aceptados++;
				cout << nombre << " -> OFRENDA ACEPTADA (Valor: " << valor << ")\n";
				
				if (valor > mayorValor) {
					mayorValor = valor;
					mayorNombre = nombre;
				}
			} else {
				cout << nombre << " -> OFRENDA RECHAZADA (Valor: " << valor << ")\n";
			}
		}
	}
	

	double porcentaje = 0.0;
	if (peregrinosValidos > 0) {
		porcentaje = ((double)aceptados / peregrinosValidos) * 100.0;
	
	}
	cout << "Peregrinos validos: " << peregrinosValidos << endl;
	cout << "Porcentaje de aceptados: " << porcentaje << "%\n";
	cout << "Mayor ofrenda aceptada: " << mayorNombre << endl;
	
	return 0;
}
