#include <iostream>
//Incluyendo la librer�a para usar la funci�n Ra�z
#include <cmath>

using namespace std;

//Prototipo de la funci�n
void PrimeFunction(int);

int main(int argc, char *argv[]) {
	
	//Inicializo e ingreso la variable.
	int N,X;
	cin >> N;
	
	//Iinicio la iteraci�n N veces de la variable X.
	for (int i=0;i<N;i++){
		cin >> X;
		PrimeFunction(X);
	}
	
	return 0;
}
//Funci�n para analizar si es primo o no
void PrimeFunction(int X){
	int sum=0;
	
	//Inicializo un contador para saber cuantos divisores tiene.
	for (int i=1;i<=X;i++){
		if(X%i==0){
			sum += 1;
		}
	}
	
	//Analizo si tiene 2 divisores (el 1 y X) para saber si es primo o no.
	if (sum == 2){
		cout << X << " eh primo" << endl;
	}else {
		cout << X << " nao eh primo" << endl;
	}
}
	
