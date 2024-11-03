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

#ifdef NANO
//local
#else
//judge
#endif

using namespace std;

int movimientosAbuela(char matriz[][27], int n, int m , int tamanio, string  palabra) ;

int main(int argc, char *argv[]) {
	
	char matriz[27][27];
	int n, m, contador, cantPalabras, tamanio;
	string palabra;
	
	cin >> n >> m;
	
	
	cin >> cantPalabras;
	while (cantPalabras--) {
		cin >> tamanio;
		cin.ignore();
		cin >> palabra;
		
		contador = movimientosAbuela(matriz, n, m , tamanio, palabra);
		
		
		cout << contador;
	}
	
	
	return 0;
}

int movimientosAbuela(char matriz[][27], int n, int m , int tamanio, string  palabra) {
	
	int contador=0, inicio=0, letraEncontrada=tamanio;
	
	while (letraEncontrada>0){
		forr(i,0, n) {
			forr(j,0, m) {
				forr(k,inicio,tamanio) {
					contador++;
					if (palabra[k] == matriz[i][j]) {
						letraEncontrada--;
						inicio++;
						break;
					}
				}
			}
		}
	}
	
	return contador;
}

void cargarMatriz (int matriz[][], int n, int m) {
	
	forr(i,0,n) {
		forr(j,0,m) {
			cin >> matriz[i][j];
		}
	}

}
