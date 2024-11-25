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

nodoD* funcionD (Provincia * provincia, nodoD * actual) {
	ciudad Ciudad = provincia->Ciudad;
	nodoD * sig = new nodoD;
	actual->siguiente = sig;
	
	if (provincia==NULL){
		actual->siguiente = NULL;
		return actual;
	}else {
		(actual->clase).amplitudTermica = (Ciudad.temperatura.max) -(Ciudad.temperatura.min);
		(actual->clase).dia = (Ciudad.fecha.dia);
		return funcionD (provincia->siguienteP, sig);
	}
	
}
