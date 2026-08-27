#include <iostream>

using namespace std;

//Solución planteada por mí antes de la clase

int main(int argc, char *argv[]) {
	
	long long largo,numero,aux,aux2,contador=0;
	int dic;
	bool e;
	
	cin>>largo>>numero;
	
	for(int i=0;i<3;i++) { 
		
		cin>>dic;//Ingreso del numero
		
		aux=numero;//Guardo el numero en un axuliar ya que voy a trabajar sobre él y no quiero perderlo
		e=false;//Booleano de encontrado
		int j=0;//Para moverme en los digitos
		while(j<largo && !e){//Mientras J sea menor a los dígitos y no haya encontrado el dic dentro del numero continuo
			aux2=aux%1000;//Extraigo las últimas 3 cifras
			if(dic==aux2)e=true;//Lo encontré :D
			aux/=10;//"Elimino" el último dígito
			j++;
		}
		if(e)contador++;//Si encontré el numero lo cuento como encontrado
	}
	cout << contador << endl;//Devuelvo los encontrados
	
	
	return 0;
}
