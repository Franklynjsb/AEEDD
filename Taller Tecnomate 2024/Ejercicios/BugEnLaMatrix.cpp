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

const int di[] = {0,0,1,-1};
const int dj[] = {1,-1,0,0};

int n,m;
bool outside(int i, int j){
	if( i < 0 or j < 0 or i >= n or j >= m) return true;
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
	
	
	
	vector<string> vv;
	
	cin>>n>>m;
	vv.resize(n);
	forn(i,n) cin>>vv[i];
	
	for(auto & v: vv) for(auto & e: v) e = char(tolower(e)); 
	
	string bug = "bug";
	int ans = 0;
	forn(i,n){
		forn(j,m){
			forn(k,4){
				int i2 = i, j2 = j;
				bool ok = true;
				forn(a,3){
					if(outside(i2,j2)){
						ok = false;
						break;
					}
					ok &= vv[i2][j2] == bug[a];
					i2 += di[k], j2 += dj[k];
				}
				ans += ok;
			}
		}
	}
	cout<<ans<<'\n';
	
	return 0;
}
