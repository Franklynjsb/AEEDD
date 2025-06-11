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

bool Mult(int i, int& m1, int m2,int m3,int m4,int m5){
	return  (m1 && i%m1==0)||
			(m2 && i%m2==0)||
			(m3 && i%m3==0)||
			(m4 && i%m4==0)||
			(m5 && i%m5==0);
}

int MD(ll n) {
	int a, m=0;
	while(n){
		a = n%10;
		if(a > m) m = a;
		n /= 10;
	}
	return m;
}

int cD (ll n){
	int c=0;
	do {
		c++;
		n/=10;
	} while(n);
	
	return c;
}

int main() {
#ifdef NANO
	//freopen("input.in", "r", stdin);
	//freopen("output.out","w", stdout);
#endif
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, k, m1=0,m2=0,m3=0,m4=0,m5=0;
	//
	cin>>n>>k;
	if(k>=1)cin>>m1;
	if(k>=2)cin>>m2;
	if(k>=3)cin>>m3;
	if(k>=4)cin>>m4;
	if(k>=5)cin>>m5;
	//
	
	// Sobrevivientes
	int c=0;
	ll elim=0;
	forr(i,1,n+1){
		if(!Mult(i,m1,m2,m3,m4,m5)){
			c++;
			cout << i << " ";
		}else elim+=i;
	}
	//
	
	cout << "\n";
	cout << c << "\n";
	cout << elim << "\n";
	//
	
	//
	int d = cD(elim); 
	cout << d << "\n";
	//
	
	//
	if(elim%2==0) cout << MD(elim) << "\n";
	else cout << MD(c) << "\n";
	//
	return 0;
}


