#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//inicialización de Duration en segundos
	int SegundosIngresados, horas, minutos, segundos;
	
	cin >> SegundosIngresados;
	
	horas = SegundosIngresados / 3600;
	minutos = (SegundosIngresados % 3600) / 60;
	segundos = (SegundosIngresados % 3600) % 60;
	
	cout << horas << ":" << minutos << ":" << segundos << endl;
	
	
	return 0;
}

