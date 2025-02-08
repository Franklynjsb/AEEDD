#include <iostream>
using namespace std;

bool bordes (char matriz[][1001], int i, int j);
bool esInfinita (char matriz[][1001],int i, int j);

int main(int argc, char *argv[]) {
	int n,m, contador = 0;
	char matriz[1001][1001];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>matriz[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if (esInfinita(matriz, i, j)) {
				if (bordes(matriz, i, j)) {
					contador++;
				}
			}
		}
	}
	
	cout << contador << endl;
	
	
	return 0;
}

bool esInfinita (char matriz[][1001],int i, int j){
	return (matriz[i][j]=='O' and matriz[i+1][j]=='O'
			and matriz[i][j+1]=='O' and matriz[i+1][j+1]);
}
bool bordes (char matriz[][1001], int i, int j) {
	if (matriz[i-1][j]!='O' || matriz[i-1][j+1]!='O') {
		if(matriz[i][j-1]!= 'O' || matriz[i+1][j-1]!='O') {
			if (matriz[i][j+2]!='O' || matriz[i+1][j+2]!='O') {
				if (matriz[i+2][j+1]!='O' || matriz[i+2][j]) {
					return true;
				}
			}
		}
	}
	return false;
}
