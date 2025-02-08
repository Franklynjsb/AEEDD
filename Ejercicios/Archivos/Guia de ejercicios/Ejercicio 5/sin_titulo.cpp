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
	
	fstream libreria;
	libreria.open("libreria.bin", ios::binary | ios::in | ios::out);
	
	Libro libro;
	
	if (libreria.is_open()) {
		
		cin >> libro.titulo;
		cin >> libro.autor;
		cin >> libro.ISBN;
		cin >> libro.precio;
		cin >> libro.existencias;
		cin >> libro.vendidos;
		
		libreria.write((char *) &libro, sizeof(libro));
		
		
		
	}else {
		cout << "error de lectura" << endl;
	}
	
	libreria.close();
	
	return 0;
}

