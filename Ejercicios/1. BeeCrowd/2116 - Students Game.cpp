#include <iostream>
using namespace std;

bool PrimeFunction(int);

int main(int argc, char *argv[]) {
	
	int N, M, Pone=1, Ptwo=1;
	cin >> N >> M;
	
	for (int i=2; i<=N; i++){
		if(PrimeFunction(i)){
			Pone=i;
		}
	}
	for (int i=1; i<=M; i++){
		if(PrimeFunction(i)){
			Ptwo=i;
		}
	}
	
	cout << Pone*Ptwo << endl;
	
	return 0;
}

bool PrimeFunction(int X){
	int sum=0;
	
	//Inicializo un contador para saber cuantos divisores tiene.
	for (int i=1;i<=X;i++){
		if(X%i==0){
			sum += 1;
		}
	}
	//Analizo si tiene 2 divisores (el 1 y X) para saber si es primo o no.
	if (sum == 2){
		return true;
	}else {
		return false;
	}
}
