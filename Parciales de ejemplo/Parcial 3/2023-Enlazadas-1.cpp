#include <stdlib.h>
#include <iostream>
using namespace std;
struct Nodo {
	int num;
	struct Nodo *sig;
};
typedef Nodo * NodoPtr;

void insertar( NodoPtr & sPtr, int valor );
void mostrarLista( NodoPtr actual );
void Parcial3( NodoPtr & Lista );
void OrdenaDos (int & num1 , int & num2);
bool EstaOrdenada(NodoPtr Lista);


int main() {
	
	NodoPtr L1 = NULL;
	
	int valor;
	
	while ( cin >> valor )
		insertar( L1, valor );
	
	Parcial3( L1 );
	
	return 0;
}

void Parcial3( NodoPtr & Lista ){
	
	string mensaje = "Lista inicialmente ordenada";
	NodoPtr actual = Lista;
	int contador=0;
	
	while (!EstaOrdenada(Lista)) {
		while (actual!=NULL && actual->sig!=NULL){
			if (actual->num > actual->sig->num) {
				OrdenaDos(actual->num , actual->sig->num);
				contador++;
			}
			actual=actual->sig;
		}
		actual=Lista;
	}
	
	if (contador!=0){
		NodoPtr nuevo = new Nodo;
		nuevo->num = contador * (-1);
		nuevo->sig = Lista;
		mostrarLista( nuevo );
		
	}else {
		cout << mensaje << endl;
	}
	
}

void OrdenaDos (int & num1 , int & num2) {
	int aux = num1;
	num1 = num2;
	num2 = aux;
}

bool EstaOrdenada(NodoPtr Lista) {
	while (Lista!=NULL && Lista->sig!=NULL){
		if(Lista->num > Lista->sig->num){
			return false;
		}
		Lista=Lista->sig;
	}
	return true;
}


void insertar( NodoPtr & sPtr, int valor ) {
	NodoPtr nuevo;
	if (sPtr == NULL) {
		nuevo = new Nodo;
		if ( nuevo != NULL ) {
			nuevo->num = valor;
			nuevo->sig = NULL;
			sPtr = nuevo;}
		else cout << "No hay espacio";
	}
	else insertar (sPtr->sig, valor);
}

void mostrarLista( NodoPtr actual ) {
	while ( actual != NULL ) {
		cout << actual->num << " -> ";
		actual = actual->sig;
	}
	cout << "NULL" << endl;
}
