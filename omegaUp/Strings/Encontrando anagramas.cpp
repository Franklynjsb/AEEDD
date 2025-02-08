#include <iostream>
#include <string>

using namespace std;

bool vectorOrdenado(const string palabra);
void ordenarVector(string &palabra);
void Swap (char &valor1, char &valor2);


int main(int argc, char *argv[]) {
	
	string palabra1, palabra2;
	
	cin >> palabra1 >> palabra2;
	
	ordenarVector(palabra1);
	ordenarVector(palabra2);
	
	if(palabra1.length() != palabra2.length()) {
		cout << "No :(\n";
	}else if (palabra1 == palabra2) {
		cout << "ANAGRAMA!\n";
	} else {
		cout << "No :(\n";
	}
	
	return 0;
}

void ordenarVector(string &palabra) {
	
	int longitud = palabra.length();
	
	for(int j=0;j<longitud;j++) { 
		
		while(!vectorOrdenado(palabra)) {
			
			for(int i=0;i<longitud-1;i++) { 
				if (palabra[i]>palabra[i+1]){
					Swap(palabra[i], palabra[i+1]);
				}
			}
		}
	}
}

bool vectorOrdenado(const string palabra) {

	int longitud = palabra.length()-1;
	
	for(int i=0;i<longitud;i++) {
		if (palabra[i]>palabra[i+1]) {
			return false;
		}
	}
	
	return true;
}

void Swap (char &valor1, char &valor2) {
	char aux= valor1;
	valor1=valor2;
	valor2=aux;
}

