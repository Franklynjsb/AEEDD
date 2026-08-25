#include <iostream>
using namespace std;

#define tf 10000

void CantZapatillas(int v[],int tl);
void Intercambio(int& a,int& b);
void Ordenar(int v[], int tl);
void CargarLista(int z[], int tl);

int main(int argc, char *argv[]) {
	
	int zapatillas[tf],tl;
	
	cin >> tl;
	CargarLista(zapatillas, tl);
	
	Ordenar(zapatillas,tl);
	
	CantZapatillas(zapatillas,tl);
	
	
	return 0;
}

void CargarLista(int z[], int tl){//Las listas siempre se pasan en referencia así que no necesitan &
	for(int i=0;i<tl;i++){
		cin >> zapatillas[i];
	}
}

void Ordenar(int z[], int tl){
	
	for(int i=1;i<tl;i++)//Método burbuja-mejorado para ordenar las zapatillas
		for(int k=0;k<tl-i;k++){//Vá restando las pasadas
		
		if(z[k]>z[k+1]){
			Intercambio(z[k],z[k+1]);
		}
	}
}
void Intercambio(int& a,int& b){//Lo mejor para intercambiar es tener funciones como estas, es algo muy recurrente así que memorizalo
	int aux=a;
	a=b;
	b=aux;
}
	
void CantZapatillas(int v[],int tl){
	
	int conservar=0;
	int desecha=0;
	int vectorAux[1000];
	int j=0;
	for(int i=0;i<tl;i++){
		
		if(v[i] == v[i+1]){
			conservar+=2;
			i++;
		}else{
			vectorAux[j]=v[i];
			j++;
			desecha++;
		}
		
		
	}
	
	int tl2 = j;
	
	if(desecha==0){
		cout << ":D" << "\n";
		cout << desecha << "\n";
		cout << conservar << "\n";
	}
	else{
		
		for( int i=0;i<tl2; i++){
			
			cout << vectorAux[i] << " ";
		}
		cout << "\n";
		cout << desecha << "\n";
		cout << conservar << "\n";
		
		
	}
}
