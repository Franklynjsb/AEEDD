#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define TL 100001
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	
	ll edificios[TL]{};
	int Izq[TL];
	int Der[TL];
	int Pila[TL];
	int tl;
	
	cin>>tl;
	
	forn(i,tl){cin>>edificios[i];}
	
	//Izquierda
	int tope= -1;//Reset
	forn(i,tl){
		while ( tope >=0 && edificios[Pila[tope]] < edificios[i]){
			tope--; //popeo
		}
		
		if( tope == -1) Izq[i] = -1; //Nadie más alto
		else Izq[i] = Pila[tope];  //Tope bloquea el resto
		
		Pila[++tope] = i; //push
	}
	
	//derecha
	tope = -1; //Reset
	dforn(i, tl){
		while (tope >= 0 && edificios[Pila[tope]] < edificios[i]) {
			tope --;//popeo
		}
		
		if (tope == -1) Der[i] = tl; //Nadie más alto
		else Der[i] = Pila[tope];
		
		Pila[++tope] = i; //Como push pero static
		
	}
	
	forn (i,tl) {
		if( i == tl-1){
			cout << (Der[i] - Izq[i] - 1);
		}else {
			cout << (Der[i] - Izq[i] - 1) << " ";
		}
		
	}
	
	return 0;
}


