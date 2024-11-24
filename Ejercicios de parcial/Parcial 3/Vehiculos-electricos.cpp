#include <iostream>
using namespace std;

struct sucursal {
	int codigo;
	float MontoVendido;
	int unidades;
	char ciudad[30];
};

struct Sucursales {
	sucursal Sucursal;
	Sucursales * LinkTo;
};
void ItemB(Sucursales * &Principio);
void Intercambio(Sucursales * &actual, Sucursales* &siguiente);

int main(int argc, char *argv[]) {
	
	Sucursales * Principio = new Sucursales;
	
	if(Principio==NULL) {
		cout << "No hay memoria" << endl;
	}else {
		
		//Ejercicio B
		/*
			Para poder modificar el contenido de la "lista" o conjunto de Sucursaless
			podría organizarse segun su valor en (Principio->sucursal).MontoVendido
			y una vez queden organizados de esa manera checkear cuantos Sucursaless poseen el mismo valor
			e iterar sobre ellos para ordenarlos segun su sucursal.
		*/
		
		ItemB(Principio);
	}
	
	
	return 0;
}

void ItemB(Sucursales * &Principio){
	
	Sucursales * prev = NULL;
	Sucursales * actual = Principio;
	Sucursales * sig = actual->LinkTo;
	
	float montoActual, montoSig;
	
	while (actual!=NULL){
		montoActual=(actual->Sucursal).MontoVendido;
		montoActual=(sig->Sucursal).MontoVendido;
		
		if(montoActual<montoSig) {
			prev=actual;
			actual=sig;
			sig=actual->LinkTo;
		}else {
			while(montoActual>montoSig) {
				prev = sig;
				sig = sig->LinkTo;
				montoSig=(sig->Sucursal).MontoVendido;
			}
			if(montoActual > (prev->Sucursal).MontoVendido){
				Intercambio(actual, prev);
			}else if(montoActual==(prev->Sucursal).MontoVendido){
				if(((actual->Sucursal).codigo) > ((prev->Sucursal).codigo)) {
					Intercambio(actual, prev);
				}
			}
			prev=actual;
			actual=actual->LinkTo;
			sig=actual->LinkTo;
		}
		
	}
	return;
	
}

void Intercambio(Sucursales * &actual, Sucursales* &siguiente) {
	sucursal aux=actual->Sucursal;
	actual->Sucursal=siguiente->Sucursal;
	siguiente->Sucursal=aux;
	
}
