#include <iostream>
using namespace std;

//Declaración de la función creada
int Product(int FirstValue,int SecondValue);

int main(int argc, char *argv[]) {
	
	int FirstValue, SecondValue, PROD=0;
	
	cin >> FirstValue >> SecondValue;
	
	PROD = Product(FirstValue, SecondValue);
	
	cout << "PROD = " << PROD << endl;
	
	return 0;
}

//Funcion propia donde los dos valores ingresados son multiplicados entre sí
int Product(int FirstValue,int SecondValue){
	int PROD = FirstValue*SecondValue;
	return PROD;
}
