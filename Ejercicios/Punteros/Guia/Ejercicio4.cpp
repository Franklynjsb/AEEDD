#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int vector[10] = {1,2,3,4,4,7,8,9,5,4};
	
	for(int i=1;i<=10;i++) { 
		cout << &vector[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}

/*
Dado un vector de 10 elementos ={1, 2, 3, 4, 4, 7, 8, 9, 5, 4}, escribir un programa en C++
(haciendo uso de punteros) que muestre las direcciones de memoria de cada elemento del vector.
*/
