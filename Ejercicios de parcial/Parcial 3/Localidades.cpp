#include <iostream>
using namespace std;

struct Localidad {
	int Poblacion;
	int ID;
	string Nombre;
	int Habitantes;
};
struct Localidades {
	Localidad localidad;
	Localidades * linkTo;
};
struct Provincia {
	int ID;
	string Nombre;
	int Superficie;
	int Habitantes;
};
struct Provincias {
	Provincia provincia;
	Provincias * linkTo;
};

int main(int argc, char *argv[]) {
	
	
	
	return 0;
}

