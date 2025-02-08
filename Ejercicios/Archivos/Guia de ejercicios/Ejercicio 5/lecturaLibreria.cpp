#include <iostream>
#include <fstream>
using namespace std;

struct Libro {
	
	char titulo[50];
	char autor[50];
	long long ISBN;
	int precio;
	int existencias;
	int vendidos;
	
};

int main(int argc, char *argv[]) {
	
	ifstream libreria;
	libreria.open("libreria.bin", ios::binary);
	
	Libro var;
	
	if (libreria.is_open()) {
		
		for(int i=1;i<=2;i++) { 
			
			libreria.read((char *) &var, sizeof(var)*i);
			
			cout << "Autor: " << var.autor << endl;
			cout << "Titulo: " << var.titulo << endl;
			cout << "ISBN: " << var.ISBN << endl;
			cout << "Precio: " <<var.precio << endl;
			cout << "Existencias: " << var.precio << endl;
			cout << "Vendidos: " << var.vendidos << endl;
		}
		
		
	}else {
		cout << "error de lectura" << endl;
	}
	
	libreria.close();
	
	return 0;
}

