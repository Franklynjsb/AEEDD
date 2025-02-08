#include <iostream>
using namespace std;

void convertirTiempo(int segundos) {
	int dias, horas, minutos, segundosRestantes;
	
	// Calcular días
	dias = segundos / (12 * 70 * 50);
	segundosRestantes = segundos % (12 * 70 * 50);
	
	// Calcular horas
	horas = segundosRestantes / (70 * 50);
	segundosRestantes %= (70 * 50);
	
	// Calcular minutos
	minutos = segundosRestantes / 50;
	segundosRestantes %= 50;
	
	cout << dias << " " << horas << " " << minutos << " " << segundosRestantes << endl;
}

int main() {
	int segundos;
	
	cin >> segundos;
	
	convertirTiempo(segundos);
	
	return 0;
}
