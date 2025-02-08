#include <iostream>
using namespace std;
//Prototipo de la función
void LeapYearFunctionRecursive(int, int);

int main(int argc, char *argv[]) {
	int A, N;
	cin >> A >> N;
	//A -> Años desde que se empieza a calcular años bisiestos
	//N -> cantidad de años bisiestos a informar
	
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
