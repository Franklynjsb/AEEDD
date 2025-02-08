#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	string cadena;
	
	getline(cin, cadena);
	
	int iteraciones = cadena.length(), total=0, cantidadNumeros=0;
	
	for(int i=0;i<iteraciones;i++) { 
		if(cadena[i]>='0' && cadena[i]<='9') {
			cantidadNumeros++;
			total+=cadena[i]-'0';
		}
	}
	
	cout << cantidadNumeros << " " << total << endl;
	
	return 0;
}

