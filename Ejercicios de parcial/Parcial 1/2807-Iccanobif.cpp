#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int);
void iccanobif(int);

int main(int argc, char *argv[]) {
	int n;
	
	cin >> n; 
	iccanobif(n);
	cout << endl;
	
	return 0;
}

void iccanobif(int numero) {
	cout << fibonacci(numero);
	if (numero != 1) {
		cout << " ";
		iccanobif(numero - 1); 
	}
	
}


int fibonacci(int n) {
	if (n == 1 or n == 0){
		return n;
	}
	else{
		return fibonacci(n - 2)+fibonacci(n-1);
	}
}
