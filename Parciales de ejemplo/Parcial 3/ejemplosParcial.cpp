#include <iostream>
using namespace std;

struct nodo {
	char info;
	nodo * sig;
};

typedef nodo * nodoPtr;

int main(int argc, char *argv[]) {
	
	nodoPtr Lista;
	
	
	
	return 0;
}

void InsertarAlFinal(nodoPtr & Lista, char letra){
	nodo * nuevo;
	nuevo->info = letra;
	nuevo->sig = NULL;
	
	nodoPtr aux = Lista;
	
	if (Lista == NULL){
		return;
	}
	
	while(aux->sig != NULL){
		aux = aux->sig;
	}
	
	aux->sig = nuevo;
	
}

void InsertarAlPrincipio(nodoPtr & Lista, char letra){
	nodo * nuevo;
	nuevo->info = letra;
	nuevo->sig = Lista;
	
	Lista = nuevo;
	
}
