#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float lista [5] = {0.1, 0.2, 0.3, 0.4, 0.5};
	
	float * puntero = lista;
	
	
	for(int i=0;i<5;i++) { 
		cout << lista[i] << endl;
	}
	
	for(int i=1;i<=5;i++) { 
		cout << (*puntero)*i << endl;
	}
	
	cout << *(puntero+3) << endl;
	
	return 0;
}

/*
Para cada uno de los siguientes enunciados, escriba el código correspondiente.
o Declarar un arreglo de tipo float, llamado numeros e inicialice los
elementos con los siguientes valores: {0.1, 0.2, 0.3, 0.4, 0.5}. Suponga que
la constante SIZE ha sido definida como 5.
o Declarar un puntero pnum que apunte a una variable de tipo float.
o Imprimir los elementos del arreglo utilizando subíndices de arreglos.
o Idem (c) pero utilizando únicamente la variable pnum.
o Suponiendo que pnum apunta al principio del arreglo, ¿Cuál es la dirección
referenciada por (pnum+3)? ¿Y su valor?
o Suponiendo que pnum apunta al cuarto elemento del arreglo (numeros[3]).
¿A qué elemento del arreglo apunta (pnum-2)? al segundo
*/
