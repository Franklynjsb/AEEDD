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
const ll inf = 1e18;
bool caught(int n, int i, int j, ll s, vector<ll> v){
	v[0] = inf;

	ll ti = v[i], tj = v[j];
	while(s){
		if(j - i <= 1) return true; // the police and the bike are adyacent or in the same neighbourhood
		if(s <= ti and s <= tj) return false;  // the video will be upload before someone moves
		ll x = min(ti,tj);
		ti-=x;
		tj-=x;
		s-=x;
		if(ti <= 0) i--, ti = v[i];
		if(tj <= 0) j--, tj = v[j];
	}
	return false;
}

int main() {
	#ifdef NANO
		freopen("input.in", "r", stdin);
		//freopen("output.out","w", stdout);
	#endif
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,a,b;
	ll s;
	cin>>n>>a>>b>>s;
	a--;
	b--;
	
	vector<ll> v(n);
	forn(i,n) cin>>v[i];
	
	if(a > b){
		reverse(v.begin(), v.end());
		a = n - a - 1;
		b = n - b - 1;
	}

	bool ans = caught(n,a,b,s,v);
	
	if(ans) cout<<"NO"<<'\n';
	else cout<<"SI\n";
	
	return 0;
}
