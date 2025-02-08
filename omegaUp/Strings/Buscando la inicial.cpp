#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	char letraFavorita;
	
	int cantidadPalabras;
	
	string palabras, palabraFavorita;
	
	cin >> letraFavorita >> cantidadPalabras;
	
	for(int i=0;i<=cantidadPalabras;i++) { 
		getline(cin, palabras);
		
		if(palabras.front()==letraFavorita) {
			palabraFavorita=palabras;
		}
	}
	
	cout << palabraFavorita << endl;
	
	return 0;
}

