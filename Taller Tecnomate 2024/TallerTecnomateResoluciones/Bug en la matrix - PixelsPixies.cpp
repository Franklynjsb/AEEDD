#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fst first
#define snd second

#ifdef NANO
//local
#else
//judge
#endif

using namespace std;

void BugFila (char matriz[][1001], int i, int j, int &contador);
void BugColumna (char matriz[][1001], int i, int j, int &contador);
void cargarMatriz (char matriz[][1001], int n, int m) ;

int main(int argc, char *argv[]) {
	
	vector<vector<char>> matriz;
	int n,m, contador=0;
	
	cin >> n >> m;
	
	for (vector<char> fila : matriz) {
		for (char elemento : fila) {
			cin >> elemento;
			elemento = tolower(elemento);
		}
	}
	
	forr(i,0,n) {
		forr(j,0,m){
			if((matriz[i][j] == 'b') || (matriz[i][j] == 'g')) {
				BugFila(matriz, i, j, contador);
				BugColumna(matriz, i, j, contador);
			}
		}
	}
	
	cout << contador << endl;
	
	return 0;
}

void BugFila (char matriz[][1001], int i, int j, int &contador) {
	
	switch(matriz[i][j]){
		case 'b':
			if((matriz[i][j+1]=='u') && (matriz[i][j+2] == 'g')) {
				contador++;
			}
			break;
		case 'g':
			if((matriz[i][j+1]=='u') && (matriz[i][j+2] == 'b')) {
				contador++;
			}
			break;
	}
	
}
void BugColumna (char matriz[][1001], int i, int j, int &contador) {
	
	switch(matriz[i][j]){
	case 'b':
		if((matriz[i+1][j]=='u') && (matriz[i+2][j] == 'g')) {
			contador++;
		}
		break;
	case 'g':
		if((matriz[i+1][j]=='u') && (matriz[i+2][j] == 'b')) {
			contador++;
		}
		break;
	}
	
}
