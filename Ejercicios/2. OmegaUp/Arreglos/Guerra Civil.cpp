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
	
	int aldea[1000000]={};
	int p=0,n=0,r=0;
	
	cin >> n;
	forn(i,n){
		cin>>p>>r;
		aldea[p-1]=r;
	}
	
	int j=0;
	bool enc=false;
	
	while (j<n && !enc){
		if(j==0 && aldea[j]<aldea[j+1]){
			cout << j+1 << "\n";
			enc=true;
		}
		if (j==n-1 && aldea[j]<=aldea[j-1]){
			cout << j+1 << "\n";
			enc=true;
		}
		if (aldea[j-1]>=aldea[j] && aldea[j+1]>=aldea[j]){
			cout << j+1 << "\n";
			enc=true;
		}
		j++;
	}
	if(!enc)cout << "-1\n";
	
	return 0;
}


