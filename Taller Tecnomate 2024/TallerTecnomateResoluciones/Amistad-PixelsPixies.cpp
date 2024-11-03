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

bool EstaOrdenado (long long invitados, long long asientos[1000000]);

int main(int argc, char *argv[]) {
	
	long long invitados, asientos[1000000]{};
	
	cin >> invitados;
	
	forr(i,0,invitados){ 
		cin >>asientos[i];
	}
	
	if (EstaOrdenado (invitados, asientos)) {
		cout << "SI" << endl;
	}else {
		cout << "NO" << endl;
	}
	
	return 0;
}

bool EstaOrdenado (long long invitados, long long asientos[1000000]) {
	long long contador=asientos[0];
	
	forr(i,0,invitados) {
		if(contador!=asientos[i]) {
			return false;
		}
		if(asientos[i]==invitados) {
			contador=0;
		}
		
		contador++;
	}
	
	return true;
	
	
}
