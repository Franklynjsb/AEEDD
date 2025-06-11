#include <stdlib.h>
#include <iostream>
#include <cstdio>

using namespace std;

struct NodoLista {
	int info;
	struct NodoLista *sig;
};

typedef NodoLista * NodoListaPtr;

void insertar( NodoListaPtr &sPtr, int valor );
void mostrarLista( NodoListaPtr actual );
void Parcial4( NodoListaPtr & Lista );

int main() {
	
	NodoListaPtr startPtr = NULL;
	
	int item;
	
	while ( cin >> item )
		insertar( startPtr, item );
	
	Parcial4( startPtr );
	
	mostrarLista( startPtr );
	
	return 0;
}

void Parcial4( NodoListaPtr & Lista ){
	
	NodoListaPtr actual = Lista;
	NodoListaPtr impar1, impar2;
	bool bandera = false;
	int contadorParejas = 0, contadorImpares = 0, imparA, imparB;
	
	
	while (actual!=NULL) {
		if ((actual->info %2!=0) && !bandera) {
			
			bandera=true;
			contadorImpares++;
			impar1 = actual;
			imparA = actual->info;
			
		}else if ((actual->info %2!=0) && bandera){
			
			bandera = false;
			
			contadorImpares--;
			contadorParejas++;
			impar2 = actual;
			imparB = actual->info;
			
			impar1->info = imparA+imparB;
			impar1->sig = impar2->sig;
			actual = impar1;
			delete(impar2);
			
		}else {
			bandera = false;
		}
		actual = actual->sig;
	}
	
	cout << contadorParejas << " " << contadorImpares << endl;
	
}

void insertar( NodoListaPtr & sPtr, int valor ) {
	NodoListaPtr nuevo;
	if (sPtr == NULL) {
		nuevo = new NodoLista;
		if ( nuevo != NULL ) {
			nuevo->info = valor;
			nuevo->sig = NULL;
			sPtr = nuevo;}
		else cout << "No hay espacio";
	}
	else insertar (sPtr-> sig,valor);
}

void mostrarLista( NodoListaPtr actual ) {
	while ( actual != NULL ) {
		cout << actual->info << " -> ";
		actual = actual->sig;
	}
	cout << "NULL" << endl;
}
