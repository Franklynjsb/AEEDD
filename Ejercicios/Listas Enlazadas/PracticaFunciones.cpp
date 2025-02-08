#include <iostream>
using namespace std;

struct nodo {
	int info;
	nodo * siguiente;
};

int main(int argc, char *argv[]) {
	
	
	
	return 0;
}

int 

int devolverPosicion (nodo* Lista, int condicion) {
	
	int contador = 0;
	
	while (Lista!=NULL) {
		if(Lista->info == condicion) {
			return contador;
		}
		contador++;
	}
}

void InvertirLista (nodo* &Lista) {
	nodo * act = Lista;
	nodo * ant = NULL;
	
	while (act!=NULL) {
		
		nodo * sig = act->siguiente;
		
		act->siguiente = ant;
		ant=act;
		act=sig;
	}
	
	Lista = ant;
}


void EliminarNodoS (nodo * &Lista, int condicion){
	nodo * act = Lista;
	nodo * ant = NULL;
	
	while (act!=NULL) {
		
		nodo * sig = act->siguiente;
		
		if (act->info == condicion){
			act = sig;
		}
		ant = act;
	}
	Lista = ant;
	
}

void InsertarNodo (nodo * &Lista, int valor) {
	nodo * nuevo = new nodo;
	
	if (nuevo==NULL){
		cout << "No hay memoria" << endl;
	}else {
		nuevo->info = valor;
		nuevo->siguiente = Lista;
		Lista = nuevo;
	}
}

void mostrarLista (nodo * Lista) {
	
	if (Lista==NULL) {
		cout << "Esta vacia\n";
	}else {
		
		while (Lista!=NULL){
			cout << Lista->info << " --> ";
		}
		
		cout << "NULL\n" << endl;
		
	}
	
}
