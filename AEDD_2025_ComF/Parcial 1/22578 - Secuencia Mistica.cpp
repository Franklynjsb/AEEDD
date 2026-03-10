#include <bits/stdc++.h>

using namespace std;

//
bool esLet (char n){ return (n>='a' && n<='z');	}
bool esNum (char n){ return (n>='0' && n<='9'); }
//

int main() {
	
	char caracter, previo='A';
	int digiPar=0, aux, largoActual=0, largoMaximo=0, iguales=0;
	bool Eco=false, soloSimbolos=true;
	
	
	while(cin>>caracter, caracter!='#'){
		
		//
		if(esNum(caracter)){
			aux=caracter-'0';
			if(aux%2==0)digiPar++;
			
			soloSimbolos=false;
			largoActual = 0;
			iguales = 0;
		}
		//
		
		//
		else if(esLet(caracter)){
			
			soloSimbolos = false;
			
			largoActual ++;
			
			if (largoActual > largoMaximo ) largoMaximo = largoActual;
			
			if (caracter == previo && largoActual > 1) iguales++;
			else iguales = 1;
			
			if (iguales == 3) Eco = true;
			
		}
		//
		
		//
		else {
			largoActual=0;
			iguales =0;
		}
		//
		previo=caracter;
	}
	
	cout << largoMaximo << "\n";
	cout << digiPar << "\n";
	
	if(soloSimbolos) cout << "Secuencia vacia de poder\n";
	if(Eco) cout << "Eco magico detectado\n";
	
	return 0;
}


