#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int N, QT, S, numeroEstudiante, menorDiferencia;
	
	cin >> N;
	
	while (N--) {
		
		cin >> QT >> S;
		
		int posicion=0, diferencia=100;
		
		for (int i=1; i<=QT; i++) {
			
			cin >> numeroEstudiante;
			
			menorDiferencia = S - numeroEstudiante;
			
			if(menorDiferencia<0){
				menorDiferencia *=-1;
			}
			
			if(menorDiferencia<diferencia){
				diferencia=menorDiferencia;
				posicion=i;
			}
		}
		cout << posicion << endl;
	}
	
	return 0;
}

