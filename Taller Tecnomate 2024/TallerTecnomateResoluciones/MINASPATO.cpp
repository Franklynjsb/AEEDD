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

#define esPar(n) (n%2==0)? true:false
#define esLetra(c) ((c>='a')&&(c<='z'))? true : false
#define esNUmero(n) ((n>='0')&&(n<='9'))? true : false
#define raiz(n) sqrt(n)

#define tl = 10010
#ifdef NANO
//local
#else
//judge
#endif

using namespace std;

long long ataque2 (char matriz[][1001], int fila, int col);
long long ataque3 (char matriz[][1001], int fila, int col, int n);

int main(int argc, char *argv[]) {
	
	int n, q, atk, fila, col;
	long long minasEncontradasporPato=0, minasTotales=0;
	char matriz[1001][1001];
	
	cin >> n;
	
	//Carga matriz
	forr(i,0,n) {
		forr(j,0,n) {
			cin >> matriz[i][j];
			if (matriz[i][j] == 'M') {
				minasTotales++;
			}
		}
	}
	
	cin >> q;
	
	while (q--) {
		
		cin >> atk;
		
		cin >> fila >> col;
		
		fila--;
		col--;
		
		switch (atk) {
		case 1:
			if (matriz[fila][col] == 'M') {
				minasEncontradasporPato++;
				matriz[fila][col]='A';
			}
			break;
		case 2:
			minasEncontradasporPato+= ataque2 (matriz, fila, col);
			break;
		case 3:
			minasEncontradasporPato+= ataque3(matriz, fila, col, n);
			break;
		}
	}
	
	if (minasTotales-minasEncontradasporPato < 0) {
		cout << 0 << endl;
	}else {
		cout << minasTotales-minasEncontradasporPato << endl;
	}
	
	
	return 0;
}

long long ataque2 (char matriz[][1001], int fila, int col) {
	
	fila-=1;
	col-=1;
	int cont=0;
	
	forr(i,fila,fila+3) {
		forr(j,col,col+3) {
			if (matriz[i][j] == 'M') {
				cont++;
				matriz[i][j]='A';
			}
		}
	}
	return cont;
	
}
long long ataque3 (char matriz[][1001], int fila, int col, int n)  {
	
	int cont=0;
	
	forr(i,0,n) {
		if(matriz[fila][i] == 'M') {
			cont++;
			matriz[fila][i]='A';
		}
		if(matriz[i][col] == 'M') {
			cont++;
			matriz[i][col]='A';
		}
	}
	
	
	return cont;
}
