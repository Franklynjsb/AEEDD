#include <stdlib.h>
#include <iostream>
using namespace std;
struct Nodo {
	int num;
	struct Nodo *sig;
};
typedef Nodo * NodoPtr;
// 1 2 4 5 7 8 9 6 2 7 8 9

void insertar( NodoPtr & sPtr, int valor );
void mostrarLista( NodoPtr actual );
void Parcial3( NodoPtr & L1);
void OrdenaDos(int & n, int & n2);
bool Ordenadin (NodoPtr L1);

int main() {
	
	NodoPtr L1 = NULL;
	int valor;
	
	while ( cin >> valor ){
		insertar( L1, valor );
	}
	
	Parcial3( L1 );
	
	
	return 0;
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

void Parcial3( NodoPtr & L1){
	
	int contador=0;
	
	while (!Ordenadin(L1)) {
		NodoPtr aux = L1;
		
		while (aux->sig != NULL) {
			if(aux->num > aux->sig->num){
				OrdenaDos(aux->num, aux->sig->num);
				contador++;
				
			}
			aux=aux->sig;
		}
		
	}
	
	if(contador==0){
		cout<<"Lista inicialmente ordenada"<<endl;
	}else{
		
		NodoPtr nuevo = new Nodo;
		if(nuevo!=NULL){
			nuevo->num=(-1)*contador;
			nuevo->sig=L1;
			L1=nuevo;
		}
		mostrarLista( L1 );
	}
	
}
	
	bool Ordenadin (NodoPtr L1) {
		
		NodoPtr aux = L1;
		
		while(aux!=NULL && aux->sig!=NULL){
			if(aux->num > aux->sig->num){
				return false;
			}
			aux=aux->sig;
		}
		
		return true;
	}
	void OrdenaDos(int & n, int & n2){
		int aux=n;
		n=n2;
		n2=aux;
	}
		
		void mostrarLista( NodoPtr actual ) {
			while ( actual != NULL ) {
				cout << actual->num << " -> ";
				actual = actual->sig;
			}
			cout << "NULL" << endl;
		}
