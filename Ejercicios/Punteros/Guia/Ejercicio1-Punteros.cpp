#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float num1 = 3.1415926, num2 = 0.12345;
	float * puntero = &num1;
	
	cout << (*puntero) << endl;
	
	puntero = &num2;
	cout << (*puntero) << endl;
	
	cout << puntero << endl;
	cout << &num2 << endl;
	
	
	
	return 0;
}

/*

Para cada uno de los siguientes enunciados, escriba el c�digo correspondiente. Suponer que se
han declarado las siguientes variables:
float num1 = 3.1415926, num2 = 0.12345;
o Declarar un puntero a float llamado pnum.
o Asignar la direcci�n de la variable num1 a pnum.
o Imprimir el valor de la variable apuntada por pnum.
o Asignar el valor de la variable apuntada por pnum a la variable num2.
o Imprimir el valor de num2.
o Imprimir la direcci�n de num2 y la direcci�n almacenada en pnum. �Es la misma
direcci�n?zi
*/
