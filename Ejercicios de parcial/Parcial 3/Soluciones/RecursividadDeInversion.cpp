#include <iostream>
using namespace std;

struct nodo {
	int info;
	nodo * sig;
};

void crearNodo(nodo* &lista, int valor) {
	nodo* nuevo = new nodo;
	nuevo->info = valor;
	nuevo->sig = lista;
	lista = nuevo;
}

nodo* Inversion(nodo* &lista) {
	if (lista == NULL)  {
		return NULL;
	}else if (lista->sig == NULL){
		return lista;
	}else {
		// Recursividad para invertir el resto de la lista
		nodo * Invertido = Inversion(lista->sig);
		
		lista->sig->sig = lista;
		lista->sig = NULL;
		
		
		return Invertido;
		
	}
}
void IntSinRecursividad (nodo * &lista) {
	nodo * previo =NULL;
	nodo * actual = lista;
	
	while (actual!=NULL){
		nodo * siguiente = actual->sig;
		actual->sig = previo;
		previo = actual;
		actual = siguiente;
		
	}
	
	lista = previo;
	
}


int main(int argc, char *argv[]) {
	
	nodo * Nodo = new nodo;
	
	crearNodo(Nodo,1);
	crearNodo(Nodo,2);
	crearNodo(Nodo,3);
	crearNodo(Nodo,4);
	
	nodo * aux = Nodo;
	while (aux!=NULL){
		cout << aux->info << " -> ";
		aux=aux->sig;
	}
	cout << endl;
	
	IntSinRecursividad(Nodo);
	
	
	aux = Nodo;
	while (aux!=NULL){
		cout << aux->info << " -> ";
		aux=aux->sig;
	}
	return 0;
}
