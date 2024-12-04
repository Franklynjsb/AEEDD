#include <stdlib.h>
#include <iostream>
#include <cstdio>
using namespace std;

struct NodoLista {
	int info;
	NodoLista * sig;
};

typedef NodoLista * NodoListaPtr;

void insertarFinal( NodoListaPtr *sPtr, int valor );
void printLista( NodoListaPtr actual );
int Parcial3( NodoListaPtr & sPtr );

int main() {
	
	NodoListaPtr startPtr = NULL;
	
	int item;
	
	while ( cin >> item ){
		insertarFinal( &startPtr, item );
	}
	
	cout << Parcial3( startPtr ) << endl;
	
	printLista( startPtr );
	
	return 0;
}
void insertarFinal( NodoListaPtr *sPtr, int valor ) {
	
	NodoListaPtr nuevo;
	
	if (*sPtr == NULL) {
		nuevo = new NodoLista;
		if ( nuevo != NULL ) {
			nuevo->info = valor;
			nuevo->sig = NULL;
			*sPtr = nuevo;}
		else cout << "No hay espacio";
	}
	else insertarFinal (&(*sPtr)-> sig,valor);
}

int Parcial3( NodoListaPtr &sPtr ){
	
	NodoListaPtr act = sPtr;
	int contador=0, aux;
	
	
	while (act!=NULL) {
		
		if(act->info%2!=0) {
			aux = act->info;
			//Coloco -1 en el actual por que se guardo arriba su valor
			act->info= -1;
			
			NodoListaPtr nuevo = new NodoLista;//Creo la posicion
			
			nuevo->info =aux;
			nuevo->sig = act->sig;
			act->sig = nuevo;
			
			act=act->sig;
			contador++;
		}
		act=act->sig;
	}
	
	return contador;
	
}

void printLista( NodoListaPtr actual ) {
	while ( actual != NULL ) {
		cout << actual->info << " -> ";
		actual = actual->sig;
	}
	cout << "NULL" << endl;
}