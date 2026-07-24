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

int main() {
	
	int a,b;
	
	cout << "Ingresa el primer numero (a):";
	cin >> a;
	cout << "Ingresa el segundo numero (b):";
	cin >> b;
	cout << "Antes del intercambio: a = ";
	cout << a;
	cout << ",b = ";
	cout << b << "\n";
	
	int auxiliar;
	auxiliar = a;
	a = b;
	b = auxiliar;
	
	cout << "Despues del interacmbio: a = ";
	cout << a;
	cout << ", b = ";
	cout << b << "\n";
	
	return 0;
}




