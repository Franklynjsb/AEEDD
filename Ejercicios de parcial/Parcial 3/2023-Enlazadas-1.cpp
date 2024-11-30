#include <stdlib.h>
#include <iostream>
#include <cstdio>
using namespace std;
struct NodoLista {
	int info;
	struct NodoLista *sig;
};

typedef NodoLista * NodoListaPtr;

void insertar( NodoListaPtr *sPtr, int valor );
void mostrarLista( NodoListaPtr actual );
void Parcial4( NodoListaPtr &sPtr );
int main() {
	
	NodoListaPtr startPtr = NULL;
	
	int item;
	
	while ( cin >> item ){
		insertar( &startPtr, item );
	}
	
	Parcial4( startPtr );
	mostrarLista( startPtr );
	return 0;
}
void insertar( NodoListaPtr *sPtr, int valor ) {
	NodoListaPtr nuevo;
	if (*sPtr == NULL) {
		nuevo = new NodoLista;
		if ( nuevo != NULL ) {
			nuevo->info = valor;
			nuevo->sig = NULL;
			*sPtr = nuevo;}
		else cout << "No hay espacio";
	}
	else insertar (&(*sPtr)-> sig,valor);
}

void Parcial4( NodoListaPtr &sPtr ){
	
	NodoListaPtr act = sPtr;
	NodoListaPtr impar1, impar2;
	bool bandera = false;
	int contImpar=0, impar1var, impar2var, contParejas=0;
	
	while (act!=NULL) {
		
		if (act->info%2!=0 && !bandera){
			bandera= true;
			contImpar++;
			
			impar1=act;
			impar1var = act->info;
			
		}else if (act->info%2!=0 && bandera){
			bandera=false;
			contImpar--;
			contParejas++;
			
			impar2 = act;
			impar2var=act->info;
			
			impar1->info = impar1var + impar2var;
			impar1->sig = impar2->sig;
			act = impar1;
			
			delete impar2;
			
		}else {
			bandera = false;
		}
		act = act->sig;
	}
	
	cout << contParejas << " " << contImpar << endl;
	
}
	

void mostrarLista( NodoListaPtr actual ) {
	while ( actual != NULL ) {
		cout << actual->info << " -> ";
		actual = actual->sig;
	}
	cout << "NULL" << endl;
}	
