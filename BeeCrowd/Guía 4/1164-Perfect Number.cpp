#include <iostream>
using namespace std;

//Prototipo de la función
void PerfectFunction(int);

int main(int argc, char *argv[]) {
	
	int N,X;
	cin >> N;
	
	//Contador donde según el numero ingresado
	//serán las veces que se reitere.
	for (int i=0;i<N;i++){
		cin >> X;
		PerfectFunction(X);
	}
	
	return 0;
}

void PerfectFunction(int X){
	//Inicializa la variable para contar la suma de divisores.
	int sum=0;
	
	//Para el numero X que se ingrese
	//Se empieza probando desde 1 para que los numeros que los divide se sumen.
	for (int i=1;i<X;i++){
		//Si X es divido por i se suma en la variable sum
		if(X%i==0){
			sum+=i;
		}
	}
	
	//Si el numero que da como resultado en sum es igual a X
	//Entonces es considerado perfecto.
	if (X == sum){
		cout << X << " eh perfeito" <<endl;
	}else{
		cout << X << " nao eh perfeito" <<endl;
	}
}
