#include <iostream>

#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	
	//Entrada constante T numero de casos
	int T;
	cin >> T;
	
	//Contador de narcicistas
	int Narcisistas=0;
	
	for(int i=0;i<T;i++){
		
		//Valores a analizar
		int X;
		cin >> X;
		
		//Usados para contar dígitos
		int digits=0;
		int auxi=X;
		
		//Contador de dígitos
		while(auxi>0){
			auxi/=10;
			digits++;
		}
		
		
		//Usados como auxiliares para encontrar el valor de la suma
		//de los digitos elevados a la cantidad de ellos.
		int aux=X, div;
		int valor=0;
		
		//Sumatoria
		for(int i=0; i<digits; i++){
			div=aux%10;
			valor+=pow(div, digits);
			aux/=10;
		}
		
		//Si el valor encontrado es el mismo que el ingresado
		//se le considera Narcisistas y aumenta su contador.
		if(valor==X){
			Narcisistas++;
			cout << "Narcisista" << endl;
		}else {
			cout << "No"<<endl;
		}
	}
	cout << "Total = " <<Narcisistas<<endl;
	
	
	
	return 0;
}
