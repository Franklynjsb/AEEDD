#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//inicialización de Duration en segundos
	int edadDias, anos, meses, dias;
	
	cin >> edadDias;
	
	anos = edadDias / 365;
	meses = (edadDias % 365) / 30;
	dias = (edadDias % 365) % 30;
	
	cout << anos << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;
	
	return 0;
}

