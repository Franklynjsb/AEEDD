#include <iostream>
using namespace std;
//Prototipo de la función
void LeapYearFunction(int, int);

int main(int argc, char *argv[]) {
	int A, N;
	cin >> A >> N;
	//A -> Años desde que se empieza a calcular años bisiestos
	//N -> cantidad de años bisiestos a informar
	
	if (N!=0){
		LeapYearFunction(A,N);
	}else {
		cout << "||description" << endl;
		cout << "Dado que no se pide ningún año no se muestra nada" << endl;
	}
	
	return 0;
}

void LeapYearFunction (int A, int N){
	for (int i = 1; i <= N;){
		if (A%4==0 || A%400==0){
			i++;
			cout << A << endl;
		}
		A++;
	}
}
