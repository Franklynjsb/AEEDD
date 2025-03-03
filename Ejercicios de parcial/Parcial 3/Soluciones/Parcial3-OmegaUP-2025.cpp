#include <stdlib.h>
#include <iostream>

using namespace std; 

struct Nodo {
	string nombre;
	int altura, peso;
	struct Nodo *sig;
};

typedef Nodo * NodoPtr;

void insertar( NodoPtr & sPtr, string NOMBRE, int ALTURA, int PESO);
void mostrarLista( NodoPtr actual );
void Parcial3( NodoPtr &Lista, int &cantidad, int &sumapesos );
void SumadorPesos (NodoPtr Lista, int & sumapesos);
void NuevaLista(NodoPtr& ListaAUX,string nick,int weight,int high, int & cantidad);
bool NoexisteNick(string NOMBRE, NodoPtr ListaAUX);

int main() {
	NodoPtr L1 = NULL;
	
	string dato1;
	
	int dato2, dato3;
	int cantidad=0, sumapesos=0;
	
	while ( cin >> dato1 >> dato2 >> dato3)
		insertar( L1, dato1, dato2, dato3 );
	
	Parcial3(L1, cantidad, sumapesos);
	
	cout << cantidad << " " << sumapesos << endl;
	
	return 0;
}

void insertar( NodoPtr & sPtr, string NOMBRE, int ALTURA, int PESO){
	NodoPtr nuevo;
	
	if (sPtr == NULL) {
		nuevo = new Nodo;
		if ( nuevo != NULL ) {
			nuevo->nombre = NOMBRE;
			nuevo->altura = ALTURA;
			nuevo->peso = PESO;
			nuevo->sig = NULL;
			sPtr = nuevo;}
		else cout << "No hay espacio";
	}
	else insertar (sPtr->sig, NOMBRE, ALTURA, PESO);
}
	
	void Parcial3( NodoPtr &Lista, int &cantidad, int &sumapesos ){
		
		NodoPtr ListaAUX = NULL;
		
		while(Lista!=NULL){
			NuevaLista(ListaAUX, Lista->nombre, Lista->peso, Lista->altura, cantidad);
			Lista=Lista->sig;
		}
		
		while (ListaAUX!=NULL){
			sumapesos+=ListaAUX->peso;
			ListaAUX = ListaAUX->sig;
		}
		
	}
		void NuevaLista(NodoPtr& ListaAUX,string nick,int weight,int high, int & cantidad){
			NodoPtr aux = ListaAUX;
			bool bandera = false;
			
			while(aux!=NULL){
				if(aux->nombre == nick){
					if(aux->peso < weight){
						aux->peso = weight;
					}
					if(aux->altura < high) {
						aux->altura = high;
					}
					bandera = true;
				}
				aux = aux->sig;
			}
			
			if(!bandera){
				insertar(ListaAUX, nick, high,weight);
				cantidad++;
			}
		}
			
			void SumadorPesos (NodoPtr Lista, int & sumapesos) {
				while(Lista!=NULL){
					sumapesos+=Lista->peso;
					Lista=Lista->sig;
				}
			}
			
			
			void mostrarLista( NodoPtr P ) {
				while ( P != NULL ) {
					cout <<P->nombre <<" " << P->altura <<" " <<P->peso <<" -> ";
					P= P->sig;
				}
				cout << "NULL" << endl;
			}
