#include <iostream>
using namespace std;

int Fibonacci (int numero);
int DigitosImpares(int numero);
int DigitosPares(int numero);
int FiltroNacci(int numero, int contador);

int main(int argc, char *argv[]) {
	
	int numero, contador=0, resultado;
	
	do{
		cin >> numero;
	}while (numero<=1 || numero>=20);
	
	contador=numero;
	
	resultado = FiltroNacci(numero, contador);
	
	cout <<"T= "<< resultado << endl;
	
	return 0;
}


int DigitosImpares(int numero) {
	
	if(numero==0) {
		return numero;
	}else{
		if ((numero%10)%2!=0) {
			return 1 + DigitosImpares(numero/10);
		}else {
			return 0 + DigitosImpares(numero/10);
		}
	}
}
int DigitosPares(int numero) {
	if(numero==0) {
		return numero;
	}else {
		if ((numero%10)%2==0) {
			return 1 + DigitosPares(numero/10);
		}else {
			return 0 + DigitosPares(numero/10);
		}
	}
}

int FiltroNacci(int numero, int contador) {
	
	int resultado=Fibonacci(numero);
	
	if(contador==0){
		return resultado;
	}else {
		if(DigitosImpares(resultado)>DigitosPares(resultado)) {
			return FiltroNacci(numero+1, contador-1);
		}else {
			if(numero<10){
				if(DigitosImpares(resultado)>DigitosPares(resultado)){
					return resultado;
				}else {
					return FiltroNacci(numero+1, contador);
				}
			}else {
				return FiltroNacci(numero+1, contador);
			}
		}
	}
}

int Fibonacci (int numero) {
	if (numero==0 || numero==1) {
		return numero;
	}else {
		return Fibonacci(numero-1) + Fibonacci(numero-2);
	}
}
