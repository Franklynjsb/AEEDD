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

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

struct Color {
	int r,g,b;
};

bool CololoresIguales (Color a, Color b){
	if(a.r==b.r && a.g==b.g && a.b == b.b)return true;
	else return false;
};

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Color matriz[30][30];
	Color magenta={255,0,255};
	Color cian={0,255,255};
	Color gris={100,100,100};
	
	int n;
	cin >>n;
	
	//Cargar
	forn(i,n) {
		forn(j,n) {
			if ((j<i) && (j<(n-1-i))) matriz[i][j]=cian;
			else if ((j>i) && (j>(n-1-i))) matriz[i][j]=magenta;
			else matriz[i][j]=gris;
		}
	}
	
	//Mostrar
	forn(i,n) {
		forn(j,n) {
			if(CololoresIguales(matriz[i][j],cian)) cout << "* ";
			else if(CololoresIguales(matriz[i][j],magenta)) cout << "- ";
			else cout << "  ";
		}
		cout << "\n";
	}
	
	
	return 0;
}




