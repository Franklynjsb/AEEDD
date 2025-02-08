#include <iostream>
using namespace std;
//Prototipo de la funci�n
void LeapYearFunctionRecursive(int, int);

int main(int argc, char *argv[]) {
	int A, N;
	cin >> A >> N;
	//A -> A�os desde que se empieza a calcular a�os bisiestos
	//N -> cantidad de a�os bisiestos a informar
	
	LeapYearFunctionRecursive(A,N);
	
	return 0;
}

void LeapYearFunctionRecursive (int A, int N){
	if (N == 0){
		return;
	}else if (A%100==0){
		if (A%4==0 && A%400==0){
			cout << A << endl;
			N--;
		}
	}else if (A%4==0) {
		cout << A << endl;
		N--;
	}
	LeapYearFunctionRecursive(A+1,N);
}
