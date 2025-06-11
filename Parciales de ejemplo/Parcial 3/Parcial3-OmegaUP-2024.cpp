#include <stdlib.h>
#include <iostream>

//Rellenar con los nodos faltantes:

using namespace std;

struct Nodo {
	int num;
	struct Nodo *sig;
};

typedef Nodo * NodoPtr;

void insertar( NodoPtr & sPtr, int valor );
void mostrarLista( NodoPtr actual );
void CompletarLista (NodoPtr & Lista);

int main() {
	NodoPtr L1 = NULL;
	
	int valor;
	
	while ( cin >> valor )
		insertar( L1, valor );
	
	
	CompletarLista (L1);
	
	mostrarLista( L1 );
	
	return 0;
}


void CompletarLista (NodoPtr & Lista) {
	
	NodoPtr auxiliar = Lista;
	NodoPtr siguienteAUX = auxiliar->sig;
	
	while(siguienteAUX!=NULL) {
		if(auxiliar->num < siguienteAUX->num) {
			int i = auxiliar->num+1;
			while (i < siguienteAUX->num){ 
				NodoPtr nuevo = new Nodo;
				
				nuevo->num = i;
				nuevo->sig = siguienteAUX;
				auxiliar->sig = nuevo;
				auxiliar = auxiliar->sig; //Linea importante para seguir el ciclo, sino hay bucle
				i++;
			}
		}else {
			int j = auxiliar->num-1;
			
			while(j>siguienteAUX->num){ 
				NodoPtr nuevo = new Nodo;
				
				nuevo->num = j;
				nuevo->sig = siguienteAUX;
				auxiliar->sig = nuevo;
				auxiliar = auxiliar->sig; //Linea importante para seguir el ciclo, sino hay bucle
				j--;
			}
		}
		
		auxiliar = auxiliar->sig;
		siguienteAUX = auxiliar->sig;
	}
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
