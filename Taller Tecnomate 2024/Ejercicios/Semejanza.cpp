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
	
	int n;
	cin>>n;
	vector<vector<int>> vv(n,vector<int>(n));
	forn(i,n) forn(j,n) cin>>vv[i][j];
	
	vector<int> vmn(n);
	
	forn(i,n) vmn[i] = *min_element(vv[i].begin(),vv[i].end());
	
	forn(i,n) forn(j,n) vv[i][j] %= vmn[i];
	
	int ans = 0;
	forn(j,n){
		bool ok = true;
		forn(i,n) ok &= vv[i][j] == 0;	
		ans+=ok;
	}
	
	cout<<ans<<'\n';
	return 0;
}
