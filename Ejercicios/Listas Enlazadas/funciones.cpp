#include <iostream>
using namespace std;

struct Nodo {
	int info;
	Nodo * LinkTo;
};

bool InsertarNodo (Nodo * &lista);

int main(int argc, char *argv[]) {
	
	return 0;
}

bool InsertarNodo (Nodo * & lista){
	Nodo * nuevo = new Nodo;
	if(nuevo==NULL){
		return false;//No se pudo crear por falta de memoria
	}else{
		nuevo->info = 1; //Le damos valor a sus campos (no necesario)
		if(lista == NULL) { //Si la lista está vacia simplemente se ingresa
			lista=nuevo;//La lista tiene como elemento al nuevo
			return true;//Se pudo crear
	}else{
			Nodo * aux = lista; //se crea un auxiliar que tenga el valor ingresado
			while (aux->LinkTo != NULL){ //Mientras el siguiente no sea NULL
				aux = aux->LinkTo; //Nos movemos al siguiente nodo
			} //Una vez el siguiente sea nulo
			nuevo->LinkTo = NULL;
			aux -> LinkTo = nuevo; //Vinculamos la ultima posicion al nuevo
			return true; //Si se pudo burro
		}
	} 
}
	
bool InsertarNodo (int info, int pos, Nodo * & lista){
	Nodo * nuevo = new Nodo;
	if(nuevo==NULL){
		return false;//Falta de memoria
	}
	
	//Para la primer posicion
	if(pos==0){
		nuevo->LinkTo = lista;//Se vincula a la lista
		lista = nuevo;//Acá es que el nuevo toma la posicion del primero
						//Por que ya se vinculo al resto antes.
		return true;//Si se pudo burro
	}
	
	//Para agregar en otras posiciones
	Nodo * aux = lista;
	int i=0;
	while(aux != NULL && i<pos-1){
		aux=aux->LinkTo;//Acá estoy en la posicion que deseo insertar
		i++;
	}
	if(aux=NULL){//Posicion nula o inexistente
		delete nuevo;//Si la posicion a la que quiero insertar es nulo no tiene caso
		return false;//No se pudo por que la posicion no exista
	}
	//Si existe:
	nuevo->LinkTo = aux->LinkTo; //Se vincula al nuevo al resto de la lista que queda por delante de la posicion
	aux->LinkTo = nuevo; //se ingresa al nuevo a la lista por que ya agarro al resto
	return true;//Si se pudo ingresar
	
}


void BuscarElemento(Nodo * lista){
	int pos = 0;
	int num = 9; //Creado solo para ejemplo
	while(lista != NULL && lista->info != num) {
		lista = lista->LinkTo;//Me muevo a la siguiente posicion
		pos++;//Cuento las posiciones que me moví
		//Todo se repite hasta que el valor es el que se quiere encontrar
	}
	
	if (lista == NULL) {//Es el caso de que haya llegado al final de la lista
		cout << "No se econtro "<< endl;
	}else {
		cout << "Se encontró en " << pos << "de la lista " << endl;
	}
}
	
void eliminarElemento (Nodo * & lista){
	Nodo * aux = lista;
	Nodo * prev = NULL;
	int num = 8;//Para ejemplo, se ingresa ah
	while (aux!=NULL && aux->info!=num){
		prev = aux;
		aux = aux->LinkTo;//Me muevo en la lista hasta el elemento que busco
	}
	
	if (aux == NULL) {
		return;//No se pudo eliminar por que llego al final y no lo encontro
	}
	
	if(prev == NULL){//Cuando el elemento sea el primero
		lista = aux->LinkTo;
	}else {
		prev->LinkTo = aux->LinkTo;//Se vincula al anterior con el siguiente
	}
	delete aux; //DESPUES se borra al elemento
}

bool InvertirLista(Nodo * &lista) {
	if(lista==NULL){
		return false;//No se puede invertir si esta vacía
	}
	
	Nodo * prev = NULL;
	Nodo * actual = lista;
	
	while (actual!=NULL) {
		Nodo * sig = actual -> LinkTo; //Resguardo el siguiente
		actual->LinkTo = prev;//El siguiente pasa a ser el previo
		actual = sig; //Y el actual pasa a ser el siguiente
	}
	//Una vez se llegue a NULL (final)
	lista = prev; //El inicio pasa a ser el final
}
