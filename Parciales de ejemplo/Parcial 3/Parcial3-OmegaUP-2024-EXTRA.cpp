#include <stdlib.h>
#include <iostream>

//ITEM A - Rellenar con los nodos faltantes:
//ITEM B - Crear una copia de los nodos añadidos en otra lista

using namespace std;

struct Nodo {
	int num;
	struct Nodo *sig;
};

typedef Nodo * NodoPtr;

void insertar( NodoPtr & sPtr, int valor );
void mostrarLista( NodoPtr actual );
void CompletarLista (NodoPtr & Lista, NodoPtr & ListaNODOS);

int main() {
	NodoPtr L1 = NULL;
	NodoPtr L2 = NULL;
	
	int valor;
	
	while ( cin >> valor )
		insertar( L1, valor );
	
	
	CompletarLista (L1, L2);
	
	mostrarLista( L1 );
	
	cout << "Lista de nodos añadidos: " << endl;
	mostrarLista( L2 );
	
	return 0;
}


void CompletarLista (NodoPtr & Lista, NodoPtr & ListaNODOS) {
	
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
				
				insertar(ListaNODOS, i);
				
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
				
				insertar(ListaNODOS, j);
				
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
