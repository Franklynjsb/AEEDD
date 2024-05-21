#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int X,Y,Sum=0;

	cin >> X >> Y;
	
	//Si los valores ingresados son iguales no hay nada entre medio
	if (X >= Y) {
		for (int i = Y+1; i < X; i++) {
			if (i % 2!=0){
				Sum+=i;
			}
		}
		//Se imprimen la cantidad de valores impares sumados
		cout << Sum <<endl;
		
	//En caso de que Y sea mayor a X se empieza a contar a partir de X
	}else if (Y >= X){
		for (int i=X+1; i < Y; i++) {
			if (i % 2 !=0 ){
				Sum+=i;
			}
		}
		//Se imprimen la cantidad de valores impares sumados
		cout << Sum <<endl;
	}

	return 0;
}

