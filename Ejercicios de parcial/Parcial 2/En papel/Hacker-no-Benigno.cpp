#include <iostream>
using namespace std;

struct Alumno {
	string Nombre;
	string Apellido;
	int Ingreso;
};
struct ListaAlumno {
	Alumno lista[1450];
	int tl;
};

void cargarMatriz (char Matriz[][1450]);
Alumno ReconstruyeLinea(char MatrizRota[][1450], int fila);
ListaAlumno ReconstruyeInfo (Alumno alumnoArreglado, ListaAlumno &listaAlumno);
bool esLetra(char caracter);
bool esNumero(char caracter);
bool esPeso(char caracter);

int main(int argc, char *argv[]) {
	
	
	
	char MatrizRota[31][1450];
	Alumno alumnoArreglado;
	ListaAlumno listaAlumno;
	listaAlumno.tl=0;
	
	cargarMatriz(MatrizRota);
	
	for(int i=0;i<1450;i++) { 
		alumnoArreglado = ReconstruyeLinea(MatrizRota, i);
		listaAlumno.tl++;
		listaAlumno= ReconstruyeInfo(alumnoArreglado, listaAlumno);
		
	}
	
	return 0;
}

ListaAlumno ReconstruyeInfo (Alumno alumnoArreglado, ListaAlumno &listaAlumno) {
	
	if (alumnoArreglado.Nombre != "DANGER" && alumnoArreglado.Apellido!="DANGER"){
		listaAlumno.lista[listaAlumno.tl] = alumnoArreglado;
	}
	return listaAlumno;
}

Alumno ReconstruyeLinea(char MatrizRota[][1450], int fila) {
	Alumno alumno;
	bool nombreCompleto=false;
	
	for(int i=0;i<31;i++) { 
		if((esLetra(MatrizRota[fila][i]))) {
			if(!nombreCompleto) {
				alumno.Nombre += MatrizRota[fila][i];
			}else {
				alumno.Apellido+= MatrizRota[fila][i];
			}
		}else if (esNumero(MatrizRota[fila][i])) {
			alumno.Ingreso+=MatrizRota[fila][i]-'0';
		}else if (esPeso(MatrizRota[fila][i])) {
			nombreCompleto=true;
		}
	}
	return alumno;
}

bool esLetra(char caracter) {
	if ((caracter>='a') && (caracter<='z')){
		return true;
	}else if ((caracter>='A') && (caracter<='Z')) {
		return true;
	}
	return false;
}

bool esNumero(char caracter) {
	if ((caracter>='0') && (caracter<='9')){
		return true;
	}
	return false;
}

bool esPeso(char caracter) {
	if ((caracter>='$')){
		return true;
	}
	return false;
}

void cargarMatriz (char Matriz[][1450]) {
	for(int i=0;i<31;i++) { 
		for(int j=0;j<1450;j++) { 
			cin >> Matriz[i][j];
		}
	}
}
