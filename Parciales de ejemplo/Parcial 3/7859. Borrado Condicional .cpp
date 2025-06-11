#include <iostream>
using namespace std;

struct nodo {
	int numero;
	nodo * siguiente;
};

void BorrarNodo(nodo * &Lista, int num);
int RecParcial3 (nodo * &Lista);
void InsertarNodo (nodo* &Lista, int num);
void MostrarLista (nodo * Lista);

int main(int argc, char *argv[]) {
	
	nodo * Lista = new nodo;
	Lista->siguiente = NULL;
	
	int valor;
	
//	while (cin >> valor){
//		InsertarNodo(Lista, valor);
//	}
	
	InsertarNodo(Lista, 1);
	InsertarNodo(Lista, 2);
	InsertarNodo(Lista, 3);
	InsertarNodo(Lista, 4);
	
	valor = RecParcial3(Lista);
	
	cout << valor << endl;
	MostrarLista(Lista);
	
	return 0;
}

void BorrarNodo(nodo * &Lista, int num){
	nodo * aux = Lista;
	nodo * ant = NULL;
	
	while (aux!=NULL && aux->numero!=num) {
		ant=aux;
		aux= aux->siguiente;
	}
	
	if (aux==NULL){
		return;
	}
	if(ant==NULL){
		Lista = aux->siguiente;
	}else {
		ant->siguiente=aux->siguiente;
	}
	delete aux;
}

int RecParcial3 (nodo * &Lista) {
	
	nodo * act = Lista;
	nodo * ant = NULL;
	
	int sum=0;
	
	while (act!=NULL){
		nodo * sig = act->siguiente;
		if (act->numero %2!=0){
			sum+=act->numero;
			ant->siguiente = sig;
			delete act;
			act=ant;
		}
		ant = act;
		act = ant->siguiente;
	}
	
	
	return sum;
	
}

void MostrarLista (nodo * Lista) {
	//ANDA BIEN
	nodo * aux = Lista;
	
	while (aux!=NULL){
		cout << aux->numero << " -> ";
		aux = aux->siguiente;
	}
	cout << "NULL\n" << endl;
	
}

void InsertarNodo (nodo* &Lista, int num){
	
	nodo * nuevo = new nodo;
	nuevo->numero = num;
	nuevo->siguiente = NULL;
	
	if (Lista == NULL){
		Lista = nuevo;
	}
	
	nodo * aux = Lista;
	while (aux->siguiente!=NULL){
		aux=aux->siguiente;
	}
	aux->siguiente = nuevo;
	
	cout << "Inserto : " << num << endl;
}
