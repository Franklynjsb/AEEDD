#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)

using namespace std;


struct celda{
	char ter;
	int ener;
};

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	celda mat[101][101];
	ll n, cont=0, contEner=0, contSeg=0;
	
	cin >> n;
	
	forn(i,n){
		forn(j,n){
			cin>>mat[i][j].ter>>mat[i][j].ener;
			if(mat[i][j].ter=='L'){
				cont++;
				contEner+=mat[i][j].ener;
			}
		}
	}
	
	double p=(contEner*1.00)/(cont*1.00);
	ll in;
	forn(i,n){
		if(i > (n-1-i)){ in=i+1; }else{ in=n-i;};
		
		forr(j,in,n){
			if(mat[i][j].ter == 'L' && mat[i][j].ener >= p)contSeg++;
		}
	}
	cout<<contSeg<<"\n";
	
	return 0;
}
