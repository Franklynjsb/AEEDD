#include <iostream>
using namespace std;

struct Nodo {
	int info;
	struct Nodo * sig;
};
typedef Nodo * NodoPtr;

void InsertarFinal (NodoPtr & Lista, int valor);
void mostrarLista (NodoPtr Lista);
void Intercambiar (int &num1, int &num2);
bool Ordenada(NodoPtr Lista);
void OrdenarLista ( NodoPtr & Lista );

int main(int argc, char *argv[]) {
	
	
	NodoPtr L1 = NULL;
	int valor;
	
	while (cin >> valor) {
		InsertarFinal(L1,valor);
	}
	
	OrdenarLista ( L1 );
	mostrarLista ( L1 );
	
	return 0;
}

void OrdenarLista ( NodoPtr & Lista ) {
	
	NodoPtr auxiliar = Lista;
	
	while (!Ordenada(Lista)) {
		while (auxiliar->sig != NULL) {
			if(auxiliar->info > auxiliar->sig->info) {
				Intercambiar (auxiliar->info , auxiliar->sig->info);
			}
			auxiliar = auxiliar->sig;
		}
		auxiliar = Lista;
	}
	
}

bool Ordenada(NodoPtr Lista) {
	while (Lista->sig != NULL) {
		if (Lista->info > Lista->sig->info){
			return false;
		}
		Lista = Lista->sig;
	}
	return true;
}

void Intercambiar (int &num1, int &num2) {
	int aux = num1;
	num1 = num2;
	num2 = aux;
}

void InsertarFinal (NodoPtr & Lista, int valor) {
	NodoPtr nuevo;
	if(Lista==NULL) {
		nuevo = new Nodo;
		if (nuevo!=NULL) {
			nuevo->info = valor;
			nuevo->sig = NULL;
			Lista = nuevo;
		}
	}else {
		InsertarFinal(Lista->sig, valor);
	}
}

void mostrarLista (NodoPtr Lista) {
	while (Lista!=NULL){
		cout << Lista->info << " -> ";
		Lista = Lista->sig;
	}
	cout << "NULL" << endl;
}
