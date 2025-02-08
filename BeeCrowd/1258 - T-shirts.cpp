#include <iostream>
#include <string>

using namespace std;

struct Remera {
	
	string nombre;
	string color;
	char talle;
	
};

void Intercambio (Remera &uno, Remera &dos);
void ordenarLista (Remera remeras[], int tl);
void mostrarListaStrings (Remera remeras[], int tl);
void OrdenarPorColor(Remera remeras[], int tl);
void OrdenarPorTalle(Remera remeras[], int tl);
void OrdenarPorNombre(Remera remeras[], int tl);


int main(int argc, char *argv[]) {
	
	int N, tl=0;
	
	
	while (cin>>N, N!=0) {
		Remera remeras[60]{};
		tl=0;
		
		for(int i=0;i<N;i++) {
			cin.ignore();
			getline(cin, remeras[i].nombre);
			cin >> remeras[i].color;
			cin >> remeras[i].talle;
			tl++;
		};
		ordenarLista(remeras, tl);
		mostrarListaStrings(remeras, tl);
		cout << endl;
	}
	
	
	return 0;
}

void mostrarListaStrings (Remera remeras[], int tl){
	for(int i=0;i<tl;i++) { 
		cout << remeras[i].color << " " << remeras[i].talle << " " << remeras[i].nombre << endl;
	}
}

void ordenarLista (Remera remeras[], int tl) {
	for(int j=1;j<tl;j++) { 
		OrdenarPorColor(remeras, tl);
	}
	for(int j=1;j<tl;j++) { 
		OrdenarPorTalle(remeras, tl);
	}
	for(int j=1;j<tl;j++) { 
		OrdenarPorNombre(remeras, tl);
	}
	
	
}

void OrdenarPorNombre(Remera remeras[], int tl) {
	for(int i=1;i<tl;i++) { 
		for(int j=1;j<tl;j++) { 
			if ((remeras[i].color==remeras[i-1].color) && (remeras[i].talle==remeras[i-1].talle) && (remeras[i].nombre < remeras[i-1].nombre)) {
				Intercambio(remeras[i], remeras[i-1]);
			}
		}
	}
}

void OrdenarPorTalle(Remera remeras[], int tl) {
	for(int i=1;i<tl;i++) { 
		for(int j=1;j<tl;j++) { 
			if ((remeras[i].color==remeras[i-1].color) && (remeras[i].talle > remeras[i-1].talle)) {
				Intercambio(remeras[i], remeras[i-1]);
			}
		}
	}
}

void OrdenarPorColor(Remera remeras[], int tl) {
	for(int i=1;i<tl;i++) { 
		for(int j=1;j<tl;j++) { 
			if(remeras[i].color<remeras[i-1].color) {
				Intercambio(remeras[i], remeras[i-1]);
			}
		}
	}
}

void Intercambio (Remera &uno, Remera &dos){
	Remera aux=uno;
	uno=dos;
	dos=aux;
}
