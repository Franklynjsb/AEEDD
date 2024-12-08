#include <iostream>
using namespace std;

void Intercambio (int &num1, int &num2);
int krapekar(int X);
int highest_number_with_digits_of (int X);
int lowest_number_with_digits_of(int X);


int main(int argc, char *argv[]) {
	
	int casos, numero;
	
	cin >> casos;
	
	for(int i=1;i<=casos;i++) { 
		cin >> numero;
		cout << "Caso #"<<i<<": " << krapekar(numero) << endl;
	}
	
	return 0;
}

int krapekar(int X) {
	
	int cnt = 0;
	
	while (X != 6174) {
		
		int hi = highest_number_with_digits_of(X);
		int lo = lowest_number_with_digits_of(X);
		
		X = hi - lo;
		
		cnt = cnt + 1;
		
		if (cnt > 9998){
			return -1;
		}
		
	}
	
	return cnt;
	
}
int lowest_number_with_digits_of(int X) {
	int numero[4]{}, resultado=0, mult=1000;
	
	for(int i=0;i<4;i++) { 
		numero[i]=X%10;
		X/=10;
	}
	
	for(int i=0;i<3;i++) { 
		for(int j=0;j<3;j++) { 
			if (numero[j]>numero[j+1]) {
				Intercambio(numero[j], numero[j+1]);
			}
		}
	}
	
	for(int i=0;i<4;i++) { 
		resultado+=numero[i]*mult;
		mult/=10;
	}
	return resultado;
}

int highest_number_with_digits_of (int X) {
	
	int numero[4]{}, resultado=0, mult=1000;
	
	for(int i=0;i<4;i++) { 
		numero[i]=X%10;
		X/=10;
	}
	
	for(int i=0;i<3;i++) { 
		for(int j=0;j<3;j++) { 
			if (numero[j]<numero[j+1]) {
				Intercambio(numero[j], numero[j+1]);
			}
		}
	}
	
	for(int i=0;i<4;i++) { 
		resultado+=numero[i]*mult;
		mult/=10;
	}
	return resultado;
	
}
	
void Intercambio (int &num1, int &num2) {
	int aux= num1;
	num1=num2;
	num2=aux;
}
