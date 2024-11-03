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

#include <cmath>
using namespace std;

bool NValido (long n);
bool caracteresValidos (char s[], long n);

int main(int argc, char *argv[]) {
	
	
	long n,t;
	char s[1000000];
	
	cin >> t;
	while(t--) {
		
		cin >> n;
		
		forr(i,0,n) {
			cin>>s[i];
		}
		
		if (NValido(n) && caracteresValidos(s,n)) {
			cout << "CONTRASENA SEGURA" << endl;
		}else {
			cout << "CONTRASENA NO SEGURA" << endl;
		}
		
		
	}
	
	return 0;
}

bool NValido ( long n) {
	if(n>=5 && n<32 && n%2!=0) {
		return true;
	}
	
	return false;
}

bool caracteresValidos (char s[], long n) {
	if (s[0]>='a' && s[0]<='z') {
		if (s[n-1]>='A' && s[n-1]<='Z') {
			
			int valor = s[n/2]-'0';
			
			switch (valor) {
			case 2:
				return true;
				break;
			case 3:
				return true;
				break;
			case 5:
				return true;
				break;
			case 7:
				return true;
				break;
				
			}
		}
	}
	return false;
}
