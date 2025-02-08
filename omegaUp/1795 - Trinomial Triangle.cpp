#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int matriz[21][41]={0}, fila;
	long long suma=0;
	
	//Fila 0 con 1
	matriz[0][20] = 1;
	
	for(int i=1; i<21; i++){
		for (int j=0; j<41; j++) {
			
			if( (j-1)<0 ) {
				matriz[i][j]= matriz[i-1][j] + matriz[i-1][j+1];
			}else if ((j+1)>40) {
				matriz[i][j]= matriz[i-1][j-1] + matriz[i-1][j];
			} else {
				matriz[i][j]= matriz[i-1][j-1] + matriz[i-1][j] + matriz[i-1][j+1];
			}
		}
	}
	
//	Checkear la matriz	
//	for(int i=0; i<=20; i++){
//		for (int j=0; j<=40; j++) {
//			
//			cout << matriz[i][j];
//			
//		}
//		cout << endl;
//	}
	
	cin >> fila;
	
	for(int i=0; i<41; i++){
		suma += matriz[fila][i];
	}
	
	cout << suma << endl;
	
	
	return 0;
}
