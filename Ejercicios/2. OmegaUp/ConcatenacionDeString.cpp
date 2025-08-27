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

void ToMayus (char&a);
void ToMinus (char&a);
int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string n,n1;
	getline(cin,n);
	getline(cin,n1);
	
	forn(i,int(n.length())){ToMayus(n[i]);}
	forn(i,int(n1.length())){ToMinus(n1[i]);}
	
	cout << n + " " + n1 + "\n";
	
	return 0;
}


void ToMinus (char&a){if (a>= 'A' && a<= 'Z') a+=32;}
void ToMayus (char&a){ if (a>= 'a' && a <= 'z') a-=32;}
