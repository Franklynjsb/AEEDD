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
	#ifdef NANO
		freopen("input.in", "r", stdin);
		//freopen("output.out","w", stdout);
	#endif
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int p,n;
	cin>>p>>n;
	cin.ignore();
	string s;
	getline(cin,s);

	int c = 0;
	for(auto e: s){
		if(e >= 'a' and e <= 'z') c++;
		if(e >= 'A' and e <= 'Z') c++;
	}
	
	assert(c % 2 == 0);
	
	c/=2;
	c--;
	cout<<c % p + 1<<'\n';
	
	return 0;
}
