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


int main(int argc, char *argv[]) {
	
	long long t,n, w=0;
	
	cin >> t;
	
	while(t--) {
		
		cin >> n;
		
		forr(i,2,n) {
			w+=(i*n);
			w=((n*(n+1)*(2*n+1))/6);
			w+=1;
		}
		
		cout << w << endl;
		
	}
	
	
	return 0;
}
/*

long long sum=0,num,x;
cin>>x;
for(int t=0;t<x;t++){		
cin>>num;
int aux=num;
for(int i=1;i<=num;i++) { 
sum+=i*aux;


aux--;
}
sum*=2;
cout<<sum-num<<endl;
sum=0;
}
0000000

*/
