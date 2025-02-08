#include <iostream>
#include <cmath>
using namespace std;
int sumaDeDigitos(int);

int main(int argc, char *argv[]) {
	
	//Digitos y numero
	int n, m;
	
	//EOF (Ctrl+Z)
	while (cin >> n >> m){
		//Verificación del tamaño
		if(m <(pow(10,n+1))) {
			if(sumaDeDigitos(m)%3==0){
				cout << sumaDeDigitos(m) << " sim" << endl;
			}else {
				cout << sumaDeDigitos(m) << " nao" << endl;
			}
		}
		
		
	}
	
	return 0;
}

int sumaDeDigitos (int n) {
	int suma=0;
	
	while (n>0){
		suma+=n%10;
		n/=10;
	}
	return suma;
}
