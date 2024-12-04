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

void Parcial3( NodoPtr & L1);

bool Ordenadinho (NodoPtr L1);

void OrdenaDos (int &num1, int &num2);

int main() {
	
	NodoPtr L1 = NULL;
	
	int valor;
	
	while ( cin >> valor ) {
		insertar( L1, valor );
	}
	
	
	
	Parcial3(L1);
	mostrarLista( L1 );
	
	return 0;
}
void insertar( NodoPtr & sPtr, int valor ) {
	NodoPtr nuevo;
	if (sPtr == NULL) {
		nuevo = new Nodo;
		if ( nuevo != NULL ) {
			nuevo->num = valor;
			nuevo->sig = NULL;
			sPtr = nuevo;
		}else cout << "No hay espacio";
	}
	else insertar (sPtr->sig, valor);
}
	
void OrdenaDos (int &num1, int &num2){
	int aux = num1;
	num1 = num2;
	num2 = aux;
}

bool Ordenadinho (NodoPtr L1) {
	NodoPtr aux = L1;
	while (aux!=NULL && aux->sig!=NULL){
		int num1 = aux->num;
		int num2 = aux->sig->num;
		if(num1 > num2) {
			return false;
		}
		aux=aux->sig;
	}
	return true;
}

void Parcial3( NodoPtr & L1){
	
	NodoPtr aux = L1;
	int contador = 0, num1, num2;
	
	while (!Ordenadinho(L1)){
		if (aux->sig!=NULL){
			NodoPtr sig = aux->sig;
			
			num1 = aux->num;
			num2 = sig->num;
			
			if (num1 > num2){
				OrdenaDos(num1, num2);
				contador++;
				aux = aux->sig;
			}
		}else {
			aux = L1;
		}
		
	}
	
	if(contador==0){
		cout << "Lista inicialmente ordenada" <<endl;
	}else {
		insertar(L1, contador*-1);
	}
	
}
void mostrarLista( NodoPtr actual ) {
	while ( actual != NULL ) {
		cout << actual->num << " -> ";
		actual = actual->sig;
	}
	cout << "NULL" << endl;
}
