#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//Se inician los valores desde 0
	int number=0,
		positiveNumber=0,
		negativeNumber=0,
		oddNumber=0,
		evenNumber=0
	;
	
	//Contador solo para ingresar 6 valores, Se cuenta desde 0
	//pero si ponés i=1 luego colocá i<6
	for (int i=0; i<5; i++){
		
		//Se ingresa el número
		cin >> number;
		
		//Se analiza si el número es distinto de 0 para analizarlo
		if (number!=0){
			if(number>0){
				//Sí el número es mayor a cero y positivo sube el contador
				//de positivos
				positiveNumber++;
			}else {
				//Sí el número es negativo sube el contador del mismo
				negativeNumber++;
			}
		}
		//Luego se analiza la paridad y aumentan contadores según corresponda
		if(number%2==0){
			evenNumber++;
		}else {
			oddNumber++;
		}
	}
	
	//Se imprimen los contadores
	cout << evenNumber << " valor(es) par(es)" <<endl;
	cout << oddNumber << " valor(es) impar(es)" <<endl;
	cout << positiveNumber << " valor(es) positivo(s)" <<endl;
	cout << negativeNumber << " valor(es) negativo(s)" <<endl;
	
	return 0;
}

