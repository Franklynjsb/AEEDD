#include <iostream>

#include <string>
using namespace std;

//ITEM A
struct Localidades {
	int IDProvincia;
	int IDLocalidad;
	string nombreLocalidad;
	int cantHabitantes;
	
	Localidades * siguiente;
};


struct Provincias {
	int IDProvincia;
	string nombreProvincia;
	int Superficie;
	int cantHabitantes;
	
	Provincias * siguiente;
};
//FIN ITEM A

// ITEM B
void itemB (Localidades * & Lista);
// FIN ITEM B

//ITEM C
void itemC(Localidades * localidades, Provincias * & provincias);
//FIN ITEM C

//ITEM D
string itemD (Provincias * provincias);
//FIN ITEM D

//Funciones a fines
void mostrarLista (Localidades * Lista);


int main(int argc, char *argv[]) {

	Localidades * Lista = new Localidades;

	
	return 0;
}


void itemB (Localidades * & Lista) {
	
	Localidades * actual = Lista;
	Localidades * ant = NULL;
	
	while(actual!=NULL && actual->siguiente!=NULL){
		Localidades * sig = actual->siguiente;
		ant = actual;
		
		if (actual->IDLocalidad == sig->IDLocalidad){
			actual->siguiente = sig->siguiente;
		}else {
			actual = actual->siguiente;
		}
	}
	
}



void itemC(Localidades * localidades, Provincias * & provincias) {
	
	Provincias * actual = provincias;
	Provincias * anterior = NULL;
	
	Localidades * ListaLocalidades = localidades;
	
	while (actual!=NULL) {
		actual->cantHabitantes = 0;
		while (ListaLocalidades!=NULL) {
			if (ListaLocalidades->IDProvincia == actual->IDProvincia){
				actual->cantHabitantes += ListaLocalidades->cantHabitantes;
			}
			ListaLocalidades = ListaLocalidades->siguiente;
		}
		anterior = actual;
		actual = actual->siguiente;
	}
	
}



string itemD (Provincias * lista){
	string mayor;
	int MayorDensidad;
	
	while( lista!=NULL ){
		Provincias * sig = lista->siguiente;
		int densidadA = lista->cantHabitantes / lista->Superficie;
		int densidadB = sig->cantHabitantes / sig->Superficie;
		
		if (MayorDensidad < densidadA){
			
			mayor = lista->nombreProvincia;
			MayorDensidad = densidadA;
			
		}else if (MayorDensidad < densidadB) {
			
			mayor = sig->nombreProvincia;
			MayorDensidad = densidadB;
			
		}
	}
	
	return mayor;
}

	
void mostrarLista (Localidades * Lista) {
	while (Lista!=NULL){
		cout << Lista->nombreLocalidad << " -> ";
		Lista=Lista->siguiente;
	}
	cout << "NULL" << endl;
}
