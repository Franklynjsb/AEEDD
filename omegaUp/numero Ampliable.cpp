#include <iostream>
using namespace std;

bool digitosMenores (int, int);

int main(int argc, char *argv[]) {
	
	int casos;
	long numero1, numero2; //X e Y
	
	cin >> casos;
	
	while (casos--) {
		cin >> numero1 >> numero2;
		
		if(numero1<numero2){
			if(digitosMenores(numero1, numero2)) {
				
			}
		}
		
	}
	
	return 0;
}

bool digitosMenores (int num1, int num2) {
	
	if(num1==0 && num2==0){
		return true;
	}else if(num1%10<=num2%10){
		return digitosMenores(num1/10, num2/10);
	}else {
		return false;
	}
}

int contadorGrado (int num1, int num2) {
	if(num1==0 && num2==0){
		return 0;
	}else if(num1%10<=num2%10){
		return 1 + digitosMenores(num1/10, num2/10);
	}else {
		return digitosMenores(num1/10, num2/10);
	}
}
