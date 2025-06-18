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
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int ID, C;
	char genero;
	ll R;
	
	int mejorCalif=-1, mayorRep=-1, mejorCalifP=-1, mejorCalifR=-1, mejorCalifH=-1;
	int mejorCalifPID=-1, mejorCalifRID=-1, mejorCalifHID=-1;
	
	while (cin >> ID, ID != 9999){
		
		cin >> C >> R >> genero;
		
		switch(genero){
		case 'P':
			if(C>mejorCalifP) {
				mejorCalifP = C;
				mejorCalifPID = ID;
			}
			break;
		case 'H':
			if(C>mejorCalifH) {
				mejorCalifH = C;
				mejorCalifHID = ID;
			}
			break;
		case 'R':
			if(C>mejorCalifR) {
				mejorCalifR = C;
				mejorCalifRID = ID;
			}
			break;
		}
		
		if(C>mejorCalif) mejorCalif=C;
		if(R>mayorRep) mayorRep=R;
		
	}
	
	
	if(mejorCalif!=-1) cout << "Mejor calificacion: " << mejorCalif << endl;
	else cout << "Mejor calificacion: --\n";
	
	if(mayorRep!=-1)cout << "Mayor cantidad de reproducciones: " << mayorRep << endl;
	else cout << "Mayor cantidad de reproducciones: --\n";
	
	if(mejorCalifP!=-1) cout << "Genero P: Mejor cancion calificada: " << mejorCalifPID << endl;
	else cout << "Genero P: Mejor cancion calificada: --\n";
	
	if(mejorCalifR!=-1) cout << "Genero R: Mejor cancion calificada: " << mejorCalifRID << endl;
	else cout << "Genero R: Mejor cancion calificada: --\n";
	
	if(mejorCalifH!=-1) cout << "Genero H: Mejor cancion calificada: " << mejorCalifHID << endl;
	else cout << "Genero H: Mejor cancion calificada: --\n";
	
	return 0;
}


