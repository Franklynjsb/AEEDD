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
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	char t;
	int n,x, cont=0, contC=0, contR=0, contS=0;
	cin >> n;
	
	while(n--){
		cin>>x>>t;
		
		if(t=='C')contC+=x;
		else if (t=='R')contR+=x;
		else if (t=='S')contS+=x;
		cont+=x;
	}
	cout << "Total: "<< cont << " cobaias\n";
	cout << "Total de coelhos: " << contC << "\n";
	cout << "Total de ratos: " << contR << "\n";
	cout << "Total de sapos: " << contS << "\n";
	
	double pC = (contC*100.00)/cont;
	double pR = (contR*100.00)/cont;
	double pS = (contS*100.00)/cont;
	
	cout << fixed << setprecision(2);
	cout << "Percentual de coelhos: " << pC << " %\n";
	cout << "Percentual de ratos: " << pR << " %\n";
	cout << "Percentual de sapos: " << pS << " %\n";
	
	
	
	return 0;
}


