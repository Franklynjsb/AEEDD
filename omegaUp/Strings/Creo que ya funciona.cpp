#include <iostream>
#include <string>
using namespace std;

void Parchear(string mensaje, int iteraciones);

int main(int argc, char *argv[]) {
	
	int iteraciones;
	string mensaje;
	
	getline(cin, mensaje);
	
	iteraciones = mensaje.length();
	
	Parchear(mensaje, iteraciones);
	
	return 0;
}

void Parchear(string mensaje, int iteraciones) {
	for(int i=0;i<iteraciones;i++) { 
		if(mensaje[i]-'0'!=0) {
			if(mensaje[i]-'0'!=1) {
				cout << "10101" << endl;
				return;
			}
		}
	}
	
	cout << mensaje << endl;
}
