#include <iostream>
using namespace std;

struct Fecha {
	int dia,mes,ano;
};

struct info {
	int max,min;
};

struct ciudad {
	int ID;
	char nombre[30];
	Fecha fecha;
	info temperatura;
};

struct Provincia {
	ciudad Ciudad;
	Provincia * siguienteP;
};

struct claseD {
	int amplitudTermica;
	int dia;
};

struct nodoD {
	claseD clase;
	nodoD * siguiente;
};


int main(int argc, char *argv[]) {
	
	Provincia * Oficial = new Provincia;
	
	
	return 0;
}

int funcionC (Provincia * Oficial, int dias) {
	
	int contador=0;
	Provincia * aux = Oficial;
	
	if(dias==0) {
		return 0;
	}else {
		while (aux!=NULL){
			int temp = (aux->Ciudad).temperatura.max;
			
			if(temp>=35){
				contador++;
			}
			aux=aux->siguienteP;
		}
		if(contador>=200){
			return 1 + funcionC(Oficial, dias-1);
		}else {
			return 0 + funcionC(Oficial, dias-1);
		}
	}
	
}

void InsertarNodo(nodoD * &lista, int termica, int dia) {
	nodoD * nuevo = new nodoD;
	if(nuevo==NULL){
		return;//No se pudió
	}
	
	(lista->clase).amplitudTermica = termica;
	(lista->clase).dia = termica;
	
	nodoD * aux = lista;
	
	while (aux->siguiente!=NULL){
		aux=aux->siguiente;
	}
	
	aux->siguiente = nuevo;
	return;//Si se pudo burro
	
}

nodoD* funcionD (ciudad * Ciudad) {
	nodoD * lista = new nodoD;
	nodoD * actual = new nodoD;
	lista->siguiente = NULL;
	int dias=31;
	
	
	while (dias--){
		
		int amplitudTermica = Ciudad->temperatura.max - Ciudad->temperatura.min;
		int dia = (Ciudad->fecha.dia);
		
		InsertarNodo(lista, amplitudTermica, dia);
		if (dias==1){
			
			nodoD * aux = lista;
			
			while (aux->siguiente!=NULL){
				aux=aux->siguiente;
			}
			
			aux->siguiente = NULL;
			return lista;
		}
		actual = actual->siguiente;
		
		
	}
	return lista;
	
}


