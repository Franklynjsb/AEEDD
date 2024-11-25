//LOCALIDADES
#include <iostream>
using namespace std;
//Item A
struct Localidad {
	int IDLoc;
	int IDProv;
	string NombreLoc;
	int HabitantesLoc;
};
struct Localidades {
	Localidad localidad;
	Localidades * siguienteL;
};
struct Provincia {
	int IDProv;
	string NombreProv;
	int Superficie;
	int HabitantesProv;
};
struct Provincias {
	Provincia provincia;
	Provincias * siguienteP;
};
//
bool Iguales (Localidad uno, Localidad dos);

int main(int argc, char *argv[]) {
	
	//ItemA
	Provincias * provincias = new Provincias;
	Localidades * locaclidades = new Localidades;
	
	return 0;
}

bool Iguales (Localidad uno, Localidad dos){
	if(uno.HabitantesLoc == dos.HabitantesLoc){
		if(uno.IDLoc == dos.IDLoc){
			if(uno.IDProv == dos.IDProv){
				if(uno.NombreLoc == dos.NombreLoc){
					return true;
				}
			}
		}
	}
	return false;
}

void ItemB (Localidades * &lista) {
	Localidades * ant = NULL;
	Localidades * act = lista;
	Localidades * sig = act->siguienteL;
	
	while (act!=NULL){
		if(sig!=NULL){
			if(Iguales(act->localidad, sig->localidad)){
				ant = act;
				
				//Salto al siguiente del siguiente para "ignorar" el primero y así eliminarlo
				act = sig->siguienteL;
				sig = act->siguienteL;
			}else {
				ant=act;
				act=sig;
				sig=act->siguienteL;
			}
		}
	}
	return;
}

void ItemC (Localidades * lista, Provincias *&listaP) {
	Localidades * ant = NULL;
	Localidades * act = lista;
	Localidades * sig = act->siguienteL;
	
	Provincias * actP = listaP;
	Provincias * antP=NULL;
	
	while (actP!=NULL) {
		(actP->provincia).HabitantesProv = 0;
		while ((act->localidad).IDProv==(actP->provincia).IDProv) {
			
			(actP->provincia).HabitantesProv += (act->localidad).HabitantesLoc;
			
			ant =act;
			act = ant->siguienteL;
		}
		antP = actP;
		actP = antP->siguienteP;
	}
	return;
}

string ItemD (Provincias * act, string Mayor){
	
	Provincias * sig = act->siguienteP;
	
	if(act==NULL){
		return Mayor;
	}else {
		int cantA = (act->provincia).HabitantesProv/(act->provincia).Superficie;
		int cantB = (sig->provincia).HabitantesProv/(sig->provincia).Superficie;
		
		if(cantA>cantB){
			Mayor = (act->provincia).NombreProv;
			return ItemD(sig, Mayor);
		}else if (cantB>cantA) {
			Mayor = (sig->provincia).NombreProv;
			return ItemD(sig, Mayor);
		}
	}
	
	
	return Mayor;
}
