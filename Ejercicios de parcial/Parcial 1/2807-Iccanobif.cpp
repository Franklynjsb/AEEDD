#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int, int, int);
void iccanobif(int);

int main(int argc, char *argv[]) {
	int n;
	cin >> n; 
	iccanobif(n);
	cout << endl;
	return 0;
}

void iccanobif(int numero) {
	cout << fibonacci(1, 1, numero);
	if (numero != 1) {
		cout << " ";
		iccanobif(numero - 1); 
	}
	
}


int fibonacci(int anteriorAnterior, int anterior, int n) {
	if (n == 1 or n == 0) return n;
	if (n != 2) {
		int esteValor = anteriorAnterior + anterior;
		return fibonacci(anterior, esteValor, n - 1);
	}
	else return anterior;
}
