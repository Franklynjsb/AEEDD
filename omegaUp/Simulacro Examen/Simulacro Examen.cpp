#include <iostream>
using namespace std;
//Prototipo de la funci�n

int main(int argc, char *argv[]) {
	int A, N;
	cin >> A >> N;
	//A -> A�os desde que se empieza a calcular a�os bisiestos
	//N -> cantidad de a�os bisiestos a informar
	
	for (int i = 1; i <= N;){
		if (A%100==0){
			if (A%4==0 || A%400==0){
				cout << A << endl;
				i++;
			}
		}else if (A%4==0){
			cout << A << endl;
			i++;
		}
		
		A++;
	}
	
	return 0;
}
