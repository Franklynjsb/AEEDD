#include <iostream>
using namespace std;

//Declaración de la función creada
int Product(int FirstValue,int SecondValue);

int main(int argc, char *argv[]) {
	
	//Incializo e ingreso el valor de la variable.
	int FirstValue, SecondValue, PROD=0;
	cin >> FirstValue >> SecondValue;
	
	//La variable toma el valor de la función con los valores añadidos.
	PROD = Product(FirstValue, SecondValue);
	
	cout << "PROD = " << PROD << endl;
	
	return 0;
}

//Funcion propia donde los dos valores ingresados son multiplicados entre sí
int Product(int FirstValue,int SecondValue){
	int PROD = FirstValue*SecondValue;
	//Retorna como resultado de la funcion a PROD.
	return PROD;
}
