#include <bits/stdc++.h>
//No probé enviarlo pero debería ser algo así

using namespace std;

int main() {
	
	
	int k;//Cantidad de códigos
	int contadorEspejos=0;//eso xD
	int sumaMayor=0;
	string s; //Los códigos
	string centinela;//Guardo el código centinela actual
	
	//Planteo las condiciones de salida
	bool bienFormado = true;//0s al inicio
	bool espejo = true;//capicua
	
	cin >> k;
	
	while(k--){ //Cuando k sea 0 el while se detiene
		
		cin >> s;
		
		int largoPalabra=s.length()-1;
		
		/////////Bien formado -> empecé con este que es el más fácil de hacer
		if(s.at(0) == '0'){//Si empieza con 0
			bienFormado= false;
		}
		/////////
		
		
		if(bienFormado){ //Si cumple la condición más básica lo analizo, sinó continúo como si nada
			
			
			/////////Acá de tercero analizo si son capicúas o no (que puede ser lo más complejo
			int auxiliar = largoPalabra; //Uso un auxiliar por que voy a usarlo para guiarme hacia el medio de la palabra
			//int medio = largoPalabra/2;
			
			for(int i=0;i<largoPalabra;i++) { 
				if(s.at(i)!=s.at(auxiliar)){
					espejo=false; // si hay alguna diferencia deja de ser espejo
				}
				auxiliar--;
			}
			
			/////////
			
			/////////suma de digitos pares esto lo hice segundo por nivel de dificultad
			int sumaTotal=0;
			
			if(espejo){
				contadorEspejos++;
				
				for(int i=0;i<=largoPalabra;i++) { 
					if(i%2==0){
						sumaTotal+= (s.at(i)-'0'); //Transformo el caracter al numero que és para sumarlo de manera entera
					}
				}
				
				
				if(sumaTotal > sumaMayor){//No puede ser mayor o igual por si llega a ser el segundo ingresado.
					sumaMayor = sumaTotal;
					centinela=s;
				}
				
			}
			/////////
			espejo=true;
			bienFormado=true;
			
		}
	}
	
	cout << contadorEspejos << "\n";
	if(contadorEspejos==0){//Si no encontró espejos
		cout << "SIN ESPEJOS\n";
		cout << "CERO\n";
	}else{
		cout << centinela << "\n";
		cout << sumaMayor << "\n";
	}
	
	return 0;
}




