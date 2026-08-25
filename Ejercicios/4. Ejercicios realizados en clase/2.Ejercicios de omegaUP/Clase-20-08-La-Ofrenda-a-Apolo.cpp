#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	string nombre;
	float peso;
	char material;
	int distancia;
	
	
	int totalValidos = 0;
	int totalAceptados = 0;
	float maxValorAceptado = -1.0;
	string mejorPeregrino = "SIN OFRENDAS ACEPTADAS";
	bool valido=true;

	while (cin >> nombre, valido) {
		if(nombre=="FIN"){
			valido=false;
		}else {
			cin >> peso >> material >> distancia;
			bool esValido = true;
			
			if (nombre.length() < 4) {
				esValido = false;
			} else {
				int largo = nombre.length();
				for ( int i = 0; i < largo; i++) {
					// Si el carácter está en el rango numérico, el nombre es profano
					if (nombre[i] >= '0' && nombre[i] <= '9') {
						esValido = false;
					}
				}
			}
			
			if (!esValido) {
				cout << nombre << " -> NOMBRE PROFANO" << endl;
			} else {
				totalValidos++;
				
				float valorSagrado = 0.0;
				
				if (material == 'O' || material == 'o') {
					valorSagrado = peso * 10.0;
				} else if (material == 'P' || material == 'p') {
					valorSagrado = peso * 5.0;
				} else if (material == 'B' || material == 'b') {
					valorSagrado = peso * 2.0;
				}
				
				if (distancia > 100) {
					valorSagrado += 15.0;
				}
				
				cout << fixed << setprecision(2);
				
				if (valorSagrado >= 50.0) {
					cout << nombre << " -> OFRENDA ACEPTADA (Valor: " << valorSagrado << ")" << endl;
					totalAceptados++;
					
					if (valorSagrado > maxValorAceptado) {
						maxValorAceptado = valorSagrado;
						mejorPeregrino = nombre;
					}
				} else {
					cout << nombre << " -> OFRENDA RECHAZADA (Valor: " << valorSagrado << ")" << endl;
				}
			}
		}
		
	}
	
	cout << "Peregrinos validos: " << totalValidos << endl;
	
	if (totalValidos > 0) {
		
		float porcentaje = ((float)totalAceptados / totalValidos) * 100.0;
		cout << "Porcentaje de aceptados: " << porcentaje << "%" << endl;
	} else {
		cout << "Porcentaje de aceptados: 0.00%" << endl;
	}
	
	cout << "Mayor ofrenda aceptada: " << mejorPeregrino << endl;
	
	return 0;
}

