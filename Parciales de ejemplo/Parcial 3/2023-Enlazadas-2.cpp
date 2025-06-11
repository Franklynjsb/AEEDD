#include <stdlib.h>
#include <iostream>
#include <cstdio>
using namespace std;
struct NodoLista {
	int info;
	struct NodoLista *sig;
};
typedef NodoLista * NodoListaPtr;

void insertarFinal( NodoListaPtr &sPtr, int valor );
void printLista( NodoListaPtr actual );
int Parcial3( NodoListaPtr &sPtr );

int main() {
	NodoListaPtr startPtr = NULL;
	
	int item;
	
	while ( cin >> item )
		insertarFinal( startPtr, item );
	
	cout << Parcial3( startPtr ) << endl;
	
	printLista( startPtr );
	
	return 0;
}
int Parcial3( NodoListaPtr & Lista ){
	
	NodoListaPtr actual = Lista;
	
	int contador=0;
	
	
	while (actual!=NULL){
		if (actual->info %2!=0){
			contador++;//Aumento contador
			
			NodoListaPtr nuevo = new NodoLista; //Creo nodo
			
			nuevo->info = actual->info; //El nuevo tiene el numero del actual
			actual->info = -1;//El actual pasa a ser -1
			
			nuevo->sig = actual->sig; //El nuevo apunta al siguiente del actual
			actual->sig = nuevo; //Al actual pasa a ser el anterior por que apunta al nuevo
			
			actual = actual->sig; //Hago que el actual avance al nuevo para evitar un bucle
		}
		actual = actual->sig; //Avanzo en los nodos
		
	}
	
	return contador;
	
}

void insertarFinal( NodoListaPtr &sPtr, int valor ) {
	NodoListaPtr nuevo;
	if (sPtr == NULL) {
		nuevo = new NodoLista;
		if ( nuevo != NULL ) {
			nuevo->info = valor;
			nuevo->sig = NULL;
			sPtr = nuevo;}
		else cout << "No hay espacio";
	}
	else insertarFinal (sPtr->sig,valor);
}
void printLista( NodoListaPtr actual ) {
	while ( actual != NULL ) {
		cout << actual->info << " -> ";
		actual = actual->sig;
	}
	cout << "NULL" << endl;
}
