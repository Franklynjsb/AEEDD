#include <iostream>
using namespace std;

//Declaraci�n de la funci�n creada
int Product(int FirstValue,int SecondValue);

int main(int argc, char *argv[]) {
	
	//Incializo e ingreso el valor de la variable.
	int FirstValue, SecondValue, PROD=0;
	cin >> FirstValue >> SecondValue;
	
	//La variable toma el valor de la funci�n con los valores a�adidos.
	PROD = Product(FirstValue, SecondValue);
	
	cout << "PROD = " << PROD << endl;
	
	return 0;
}

//Funcion propia donde los dos valores ingresados son multiplicados entre s�
int Product(int FirstValue,int SecondValue){
	int PROD = FirstValue*SecondValue;
	//Retorna como resultado de la funcion a PROD.
	return PROD;
}
