#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//inicializaci�n de Duration en segundos
	int edadDias, a�os, meses, dias;
	
	cin >> edadDias;
	
	a�os = edadDias / 365;
	meses = (edadDias % 365) / 12;
	dias = edadDias % 12;
	
	cout << a�os << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;
	
	return 0;
}

