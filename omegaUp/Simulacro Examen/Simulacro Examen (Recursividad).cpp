#include <iostream>
using namespace std;
//Prototipo de la funci�n
void LeapYearFunctionRecursive(int, int);

int main(int argc, char *argv[]) {
	int A, N;
	cin >> A >> N;
	//A -> A�os desde que se empieza a calcular a�os bisiestos
	//N -> cantidad de a�os bisiestos a informar
	if (N!=0){
		LeapYearFunctionRecursive(A,N);
	}else {
		cout << "||description" << endl;
		cout << "Dado que no se pide ning�n a�o no se muestra nada" << endl;
	}
	return 0;
}

void LeapYearFunctionRecursive (int A, int N){
	if (N == 0){
		return;
	}else if ((A % 400 == 0 || A % 4 == 0) && (N !=0)){
		cout << A << endl;
		N--;
	}
	LeapYearFunctionRecursive(A+1,N);
}
