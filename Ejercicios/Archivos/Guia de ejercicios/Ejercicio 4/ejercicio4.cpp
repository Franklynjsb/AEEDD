#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	
	fstream archivo;
	archivo.open("texto.bin", ios::binary | ios::in | ios::out);
	int valor, random;
	
	srand(time(NULL));
	
	if (archivo.is_open()) {
		
		cin >> valor;
		
		for(int i=0;i<valor;i++) { 
			
			random = rand() % valor;
			
			archivo.write((char *) &random, sizeof(random));
			
		}
		
		for(int i=0;i<valor;i++) { 
			
			random = rand() % valor;
			
			archivo.read((char *) &random, sizeof(random));
			cout << random << " ";
		}
		cout << endl;
		
		
	}else {
		cout << "error de lectura" << endl;
	}
	
	archivo.close();
	
	return 0;
}

