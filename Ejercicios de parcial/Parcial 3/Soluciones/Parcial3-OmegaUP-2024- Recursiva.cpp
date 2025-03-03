#include <iostream>
using namespace std;

struct Nodo {
	int info;
	struct Nodo * sig;
};

typedef Nodo * NodoPtr;

void MostrarLista(NodoPtr Lista);
void InsertarNodo(NodoPtr & Lista, int valor);
void RellenarLista(NodoPtr & Lista);

int main(int argc, char *argv[]) {
	
	NodoPtr L1 = NULL;
	int valor;
	
	while (cin >> valor){
		InsertarNodo(L1, valor);
	}
	
	RellenarLista( L1 );
	MostrarLista( L1 );
	return 0;
}

void RellenarLista(NodoPtr & Lista){
	
	NodoPtr siguiente = Lista->sig;
	NodoPtr nuevo;
	
	if (siguiente!=NULL){
		if(Lista->info > (siguiente->info+1)) {
			nuevo = new Nodo;
			nuevo->info = Lista->info - 1;
			nuevo->sig = siguiente;
			Lista->sig = nuevo;
			
			RellenarLista (Lista->sig);
			
		}else if (Lista->info < (siguiente->info-1)) {
			nuevo = new Nodo;
			nuevo->info = Lista->info + 1;
			nuevo->sig = siguiente;
			
			Lista->sig = nuevo;
			
			RellenarLista (Lista->sig);
			
		}else {
			RellenarLista(Lista->sig);
		}
	}
}

void InsertarNodo (NodoPtr & Lista, int valor) {
	
	NodoPtr nuevo;
	
	if (Lista==NULL){
		nuevo = new Nodo;
		nuevo->info = valor;
		nuevo->sig = NULL;
		Lista = nuevo;
	}else {
		InsertarNodo (Lista->sig, valor);
	}
}

void MostrarLista(NodoPtr Lista) {
	while (Lista!=NULL){
		cout << Lista->info << " -> ";
		Lista = Lista->sig;
	}
	cout << "NULL" << endl;
}
