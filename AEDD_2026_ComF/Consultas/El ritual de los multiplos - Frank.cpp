#include <bits/stdc++.h>

#include <string>
using namespace std;

int main() {
	
	int guerreros, cantimag, m1=0, m2=0, m3=0, m4=0, m5=0;
	
	//
	cin >> guerreros >> cantimag;
	if(cantimag>=1)cin>>m1;
	if(cantimag>=2)cin>>m2;
	if(cantimag>=3)cin>>m3;
	if(cantimag>=4)cin>>m4;
	if(cantimag>=5)cin>>m5;
	//
	
	//////// Sobrevivientes
	int sobrevivientes=0;
	int eliminados=0;
	string vivientes="";
	for(int i=1;i<cantimag+1;i++) { 
		if ( !(//No sea multiplo de ninguno
			   (m1 && i%m1==0) || //el m1 esta como condicion por que si es 0 es falso y salta al siguiente
			   (m2 && i%m2==0) ||
			   (m3 && i%m3==0) ||
			   (m4 && i%m4==0) ||
			   (m5 && i%m5==0)
			  )
			){
			
			sobrevivientes++;
			vivientes += to_string(i)+" ";//Lo sumo al string de salida
			/*Opcion b es poner acá el:
				cout<< i <<" "; 
				
			*/
		} else {
			eliminados+=i;
		}
	}
	/////////////////primeras salidas
	
	cout << vivientes << "\n";// en la opcion B se pondría solo un cout<<"\n";
	cout << sobrevivientes << "\n";
	cout << eliminados << "\n";
	
	//////////////////
	
	//////////salida de cantidad de digitos
	int auxiliar = eliminados;
	int acumulador=0;
	do {
		acumulador++;
		auxiliar /=10;
	} while(auxiliar);
	
	cout << acumulador << "\n";
	//////////
	
	/////////salida del mayor digito dependiendo de si la suma de eliminados es par o no
	int digmax=0;
	if(eliminados%2==0){
		
		int auxiliar2 = eliminados;
		int digito;
		
		while(auxiliar2){
			digito = auxiliar2%10;
			if(digito > digmax) digmax = digito;
			auxiliar2 /= 10;
		}
		
		cout << digmax << "\n";
	}else {
		int auxiliar2 = sobrevivientes;
		int digito;
		
		while(auxiliar2){
			digito = auxiliar2%10;
			if(digito > digmax) digmax = digito;
			auxiliar2 /= 10;
		}
		
		cout << digmax << "\n";
		
	}
	
	/////////
	
	
	return 0;
}




