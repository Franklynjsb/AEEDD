#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//Se inician valores que permita decimales
	double number, positiveNumber;
	
	//Contador para solo ingresar 5 valores.
	for (int i=0; i<6; i++){
		//Se ingresan los valores;
		cin >> number;
		
		//Si es 0 lo ignoramos y pedimos otro
		if (number==0){
			i--;
		//Si es positivo sube el contador de positivos
		}else if (number > 0) {
			positiveNumber++;
		}
	}
	
	
	cout << positiveNumber << " valores positivos" << endl;
	
	
	
	
	
	return 0;
}

