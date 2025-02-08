#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int filas, columnas, iteraciones, matriz[101][101]{};
	long long operacion;
	
	cin >> filas >> columnas >> iteraciones;
	
	while (iteraciones--) {
		cin >> operacion;
		OperacionMatriz(matriz);
	}
	
	
	
	return 0;
}

void OperacionMatriz (int matriz)

/*
	https://omegaup.com/arena/problem/El-tablero-de-Bety-simplificado/

Bety compro un tablero electronico muy poco común. Este tablero tiene forma de cuadricula con filas y

columnas. El tablero electronico cuenta con 4 operaciones, "Up", "Down", "Left, "Right".

"Up" toma la primera fila, y la pone al abajo de la ultima fila.

"Down" toma la ultima fila, y la pone arriba de la primera fila.

"Left" toma la primera columna, y la pone despues de la ultima columna"

"Right" toma la ultima columna, y la pone antes de la primer columna.

Antes de empezar a jugar con el tablero, Bety quiere saber como quedara despues de aplicar
operaciones.

*/
