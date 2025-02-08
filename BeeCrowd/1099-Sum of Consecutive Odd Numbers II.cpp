#include <iostream>
using namespace std;

//Prototipo de la función.
void SumOfOddsFunction(int,int);

int main(int argc, char *argv[]) {

	//Inicializo e ingreso la cantidad de veces que se va a iterar.
	int N,X,Y,aux=0;
	cin >> N;

	for (int i=0;i<N;i++){
		cin >> X >> Y;
		//Para siempre hacer a X el mayor
		if (Y>X){
			aux=X;
			X=Y;
			Y=aux;
		}
		//Utilizo la función para imprimir la suma de impares entre ellos.
		SumOfOddsFunction(X,Y);
	}

	return 0;
}

//Funcion para calcular la suma de los impares entre ellos
void SumOfOddsFunction(int X,int Y) {
	int sum=0;
	
	//Suma los impares contando a partir de Y.
	for (int i=Y+1;i<X;i++){
		if(i%2!=0){
			sum+=i;
		}
	}
	
	cout << sum << endl;
}
