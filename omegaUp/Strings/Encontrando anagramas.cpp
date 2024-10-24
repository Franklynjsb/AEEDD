#include <iostream>
#include <string>
using namespace std;
//TERMINAR

bool Anagrama (string palabra1, string palabra2);
bool vectorOrdenado(string palabra);
void Swap(char valor1, char valor2);
void ordenarVector(string palabra);


int main(int argc, char *argv[]) {
	
	string palabra1, palabra2;
	
	cin >> palabra1 >> palabra2;
	
	if (Anagrama(palabra1, palabra2)) {
		cout << "ANAGRAMA!" << endl;
	} else {
		cout << "No :(" << endl;
	}
	
	return 0;
}

bool Anagrama (string palabra1, string palabra2) {
	int longitud = palabra1.length();
	
	ordenarVector(palabra1);
	ordenarVector(palabra2);
	
	cout << palabra1 << endl;
	cout << palabra2 << endl;
	
	for(int i=0;i<longitud;i++) { 
		if(palabra1[i] != palabra2[i]) {
			return false;
		}
	}
	
	
	return true;
	
}

void ordenarVector(string palabra) {
	
	int longitud = palabra.length();
	
	while (!vectorOrdenado(palabra)) {
		for(int i=1;i<longitud;i++) { 
			if (palabra[i-1]>palabra[i]) {
				Swap (palabra[i-1], palabra[i]);
			}
		}
	}
}

bool vectorOrdenado(string palabra) {

	int longitud = palabra.length();
	
	for(int i=1;i<longitud;i++) { 
		if (palabra[i-1]>palabra[i]) {
			return false;
		}
	}
	
	return true;
}

void Swap(char valor1, char valor2) {
	char aux= valor1;
	valor1=valor2;
	valor2=aux;
}


