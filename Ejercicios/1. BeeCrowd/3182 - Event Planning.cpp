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

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	/*
	N numero de personas
	B presupuesto
	H hoteles
	W fines de semana que quieren ir
	P precio por persona en el hotel
	A Lista de camas disponibles en el hotel
	*/
	long long N,B,H,W,P,A;
	long long calculo_actual=0,calculo_minimo=1000000000;
	cin>>N>>B>>H>>W;
	
	for(int i= 0 ;i<H;i++)//Por cada hotel
		cin>>P;
		for(int j= 0 ;j<W;j++)//Por cada semana
			cin>>A;
			if(A>=N){
				calculo_actual = N*P;
				if(calculo_actual<=B){
					if(calculo_actual<calculo_minimo)calculo_minimo=calculo_actual;
				}
			}
		}
	}
		
		if(calculo_minimo==1000000000) cout << "stay home\n";
		else cout << calculo_minimo << "\n";
		
		
		return 0;
}
