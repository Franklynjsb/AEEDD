#include <iostream>
using namespace std;
//Prototipo de la funci�n
void LeapYearFunction(int, int);

int main(int argc, char *argv[]) {
	int A, N;
	cin >> A >> N;
	//A -> A�os desde que se empieza a calcular a�os bisiestos
	//N -> cantidad de a�os bisiestos a informar
	
	LeapYearFunction(A,N);
	
	return 0;
}

void LeapYearFunction (int A, int N){
	for (int i = 1; i <= N;){
		if (A%100==0){
			if (A%4==0 && A%400==0){
				cout << A << endl;
				i++;
			}
		}else if (A%4==0) {
			cout << A << endl;
			i++;
		}
		A++;
	}
}
