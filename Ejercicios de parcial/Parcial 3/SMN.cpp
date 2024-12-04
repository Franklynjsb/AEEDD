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

bool Contador(Provincia * Oficial, int dia) {
	int cont=0;
	while (Oficial!=NULL){
		int Temp = Oficial->Ciudad.temperatura.max;
		
		if (Temp>35){
			cont++;
		}
		
	}
	
	if (cont >= 200) {
		return true;
	}else {
		return false;
	}
	
}

int funcionC (Provincia * Oficial, int dias) {
	
	if(dias==31) {
		return 0;
	}else {
		if(Contador(Oficial, dias)){
			return 1 + funcionC(Oficial, dias+1);
		}
		return 0 + funcionC(Oficial, dias+1);
		
	}
	
}




void InsertarNodo(nodoD * &lista, int termica, int dia) {
	nodoD * nuevo = new nodoD;
	if(nuevo==NULL){
		return;//No se pudió
	}
	
	nodoD * aux = lista;
	nodoD * ant = new nodoD;
	nodoD * sig = new nodoD;
	
	while (aux->siguiente!=NULL){
		
		if(aux->clase.amplitudTermica > termica) {
			ant = aux;
			break;
		}
		
		aux=aux->siguiente;
	}
	
	sig = aux->siguiente;
	ant->siguiente = sig;
	
	
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




