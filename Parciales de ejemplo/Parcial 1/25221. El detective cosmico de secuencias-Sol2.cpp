#include <iostream>
using namespace std;

//Solución rápida dada en la clase

int main(int argc, char *argv[]) {
	
	long long N, P, D;
	
	cin>>N>>P;
	
	long long aux=P, encontrado=0, resultado=0;
	for(int i=0;i<3;i++) { 
		
		cin>>D;
		aux=P;
		encontrado=0;
		
		
		//Opción - A
		while(aux/=10){//Mientras divida al numero y no sea cero (Osea false para el while) hago lo siguiente
			if(aux%1000==D)encontrado++;//Si los últimos 3 digitos son el D lo cuento
		}
		
		
		//Opción - B
		for(int j=0;j<N;j++) { 
			if(aux%1000==D)encontrado++;
			aux/=10;
		}
		
		//Opción - C
		while(aux){//Mientras divida al numero y no sea cero (Osea false para el while) hago lo siguiente
			if(aux%1000==D)encontrado++;//Si los últimos 3 digitos son el D lo cuento
			aux/=10;//Elimino el último dígito
		}
		if(encontrado!=0)resultado++;//Si lo encontré lo cuento
		
		
		
		//Opción - D
		bool encontradoBuleano=false;//Parto de pensar que no encontré ninguno todavía
		while(aux && !encontradoBuleano){//Mientras el numero no sea encontrado y siga teniendo dígitos para analizar
			if(aux%1000==D)encontrado;//Si los últimos 3 digitos son el D lo cuento
			aux/=10;//Elimino el último dígito
		}
		
		if(encontrado)resultado++;//Si encontradoBuleano es true cuento como encontrado
		///////////////D
	}
	
	//Otro camino teniendo en cuenta que siempre son 3 variables es este
	ll d1,d2,d3;
	cin>>d1>>d2>>d3;
	//Y luego aplicar alguna de las opciones A,B,C o D para buscar cada uno
	cout << resultado << endl;
	
	return 0;
}

