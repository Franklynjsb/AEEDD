#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//inicialización de Duration en segundos
	int edadDias, años, meses, dias;
	
	cin >> edadDias;
	
	años = edadDias / 365;
	meses = (edadDias % 365) / 12;
	dias = edadDias % 12;
	
	cout << años << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;
	
	return 0;
}

