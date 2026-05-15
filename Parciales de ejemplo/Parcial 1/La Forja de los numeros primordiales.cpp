#include <bits/stdc++.h>

using namespace std;

int main() {
	
	string n;
	int contador =0;
	bool primeraVuelta = true;
	string mayorPrimordial="";
	
	while(cin>>n, n!="FIN"){
		
		//Contador de casos
		contador++;
		
		/////////////////////////////////////////////////PRIMORDIAL INICO
		/////////paridad en posiciones pares
		int largoPal=n.length();
		int digito;
		bool primordial = true;
		
		for (int i=2; i <= largoPal; i+=2) {
			digito = n.at(largoPal - i) - '0';
			if (digito%2 != 0)  primordial = false;
			
		}
		/////////
		
		/////////ley de centro fuerte
		int medio=largoPal/2;
		int sumaIzq=0, digitoMedio=0;
		bool centroF = false;
		
		if(largoPal%2 ==0){ //Caso par
			
			int medio2 = medio-1;
			int digito1 = n.at(medio) - '0';
			int digito2 = n.at(medio2) - '0';
			
			if(digito2 >= digito1)	{
				digitoMedio= digito2;
				medio=medio2;
			}
			else{
				digitoMedio= digito1;
			}
			
		}else { //Caso impar
			digitoMedio = n.at(medio)-'0';
		}
		
		
		for(int i=0;i<medio;i++) { 
			sumaIzq += (n.at(i)-'0');
		}
		if(digitoMedio > sumaIzq ) centroF = true;
		/////////
		
		if(centroF && primordial){
			
			cout << n << " ACEPTADO\n";
			
			/////////////////////////////////////////////////MAYOR PRIMORDIAL INICIO
			if(primeraVuelta){
				mayorPrimordial = n;
				primeraVuelta = false;
			}else{
				int tamanio1= n.length();
				int tamanio2= mayorPrimordial.length();
				if( tamanio1 > tamanio2){
					mayorPrimordial=n;
				}else if (tamanio1==tamanio2 && n>mayorPrimordial){
					mayorPrimordial=n;
				}
			}
			/////////////////////////////////////////////////MAYOR PRIMORDIAL FIN
			
		}
		else {
			cout << n << " NO PRIMORDIAL\n";
		}
		/////////////////////////////////////////////////PRIMORDIAL FIN
		
		
		
		
	}
	
	//Retorno de cantidad de palabras
	cout << contador << "\n";
	if(primeraVuelta){
		cout << "SIN PRIMORDIALES\n";
	}else {
		cout << mayorPrimordial << "\n";
	}
	
	
	
	return 0;
}
