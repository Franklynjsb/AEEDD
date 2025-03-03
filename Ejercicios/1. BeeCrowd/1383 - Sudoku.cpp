#include <iostream>
using namespace std;

bool matrizCorrecta(int matriz[9][9]);
bool miniMatrizCorrecta (int matriz[9][9]);

int main(int argc, char *argv[]) {
	
	int matriz[9][9], numero, casos;
	
	cin >> casos;
	
	for(int instancia=1;instancia<=casos;instancia++) {
		for (int i=0; i<9; i++){
			for (int j=0; j<9; j++) {
				cin >> numero;
				matriz[i][j]=numero;
			}
		}
		
		if (matrizCorrecta(matriz) && miniMatrizCorrecta(matriz)){
			cout << "Instancia " << instancia <<endl;
			cout << "SIM" << endl;
		}else {
			cout << "Instancia " << instancia <<endl;
			cout << "NAO" << endl;
		}
		
		cout << endl;
	}
	
	
	return 0;
}

bool matrizCorrecta(int matriz[9][9]){
	
	for (int i=0; i<9; i++){
		for (int numero=1; numero<=9; numero++) {
			
			int contador=0;
			
			for (int j=0; j<9; j++){
				if(matriz[i][j] == numero) {
					contador ++;
				}
			}
			
			if(contador != 1) {
				return false;
			}else {
				contador=0;
			}
			
			
			for (int j=0; j<9; j++){
				if(matriz[j][i] == numero) {
					contador ++;
				}
			}
			
			if(contador != 1) {
				return false;
			}
		}
	}
	
	return true;
}
	
bool miniMatrizCorrecta (int matriz[9][9]){
	
	int contador;
	
	for(int fila=0; fila<9; fila+=3){
		for(int columna=0; columna<9; columna+=3) {
			for(int numero=1; numero<=9; numero++) {
				contador = 0;
				
				for (int i=0; i<3; i++){
					for (int j=0; j<3; j++) {
						if (matriz[fila+i][columna+j] == numero) {
							contador++;
						}
					}
				}
				
				if(contador !=1) {
					return false;
				}
				
			}
		}
	}
	
	return true;
}
	
