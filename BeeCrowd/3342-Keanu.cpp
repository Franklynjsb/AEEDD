#include <iostream>
#include <cmath> //Usar el pow(base,potencia)
using namespace std;

int main(int argc, char *argv[]) {
	
	//Inicializando n
	int n,a,b;
	
	//Adquiero valor de n
	cin >> n;
	
	if (n % 2 == 0) {
		a = pow(n, 2)/2;
		b = pow(n, 2)/2;
	} else {
		a = (pow(n,2)+1)/2;
		b = (pow(n,2)-1)/2;
	}
	
	cout << a << " casas brancas e " << b << " casas pretas" << endl;
	
	return 0;
}

