#include <iostream>
using namespace std;

//Prototipo de la función.
void SumOfOddsFunction(int X,int Y);

int main(int argc, char *argv[]) {
	
	//Inicializo e ingreso las variables.
	int X,Y,aux=0;
	cin >> X >> Y;
	
	//Para siempre hacer a X el mayor
	if (Y>X){
		aux=X;
		X=Y;
		Y=aux;
	}
	
	SumOfOddsFunction(X,Y);
	
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
