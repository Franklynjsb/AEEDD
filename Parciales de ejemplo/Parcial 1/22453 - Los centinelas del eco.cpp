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

int contEco(int n) {
	int p=0, ant=-1, act; //Pares anterior actual
	bool b=true;
	
	while (n>0){
		act = n%10;
		n /= 10;
		if ( act == ant){
			if (b){
				p++;
				b=false;
			}
		}else b=true;
		ant = act;
		n/=10;
	}
	return p;
}

int main() {
	#ifdef NANO
		//freopen("input.in", "r", stdin);
		//freopen("output.out","w", stdout);
	#endif
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int k,n;
	cin>>k;
	
	// Ecos PrimerEco primerReEco MaxPar
	int tE=0, pE=-1, pRE=-1, MP=0;
	
	while(k--){
		cin >> n;
		int p = contEco(n);
		if(p>=1){
			tE++;
			if(pE == -1) pE=n;
			if (p>MP){
				MP=p;
				pRE=n;
			}
		}
	}
	
	cout << tE << "\n";
	if (pE != -1) cout << pE << "\n";
    else cout << "\n";

    if (pRE != -1) cout << pRE << "\n";
    else cout << "\n";

    if (pE != -1 && pE == pRE) cout << "Eco continuo\n";
    else cout << "Eco discontinuo\n";
	
	
	return 0;
}


