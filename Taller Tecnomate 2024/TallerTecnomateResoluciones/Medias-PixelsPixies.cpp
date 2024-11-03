#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)

#ifdef NANO
//local
#else
//judge
#endif

using namespace std;

bool TodosUNo (long long medias[], int cantidadTipos);

int main(int argc, char *argv[]) {
	
	long long medias[1000000]{}, cantidadTipos;
	
	cin >> cantidadTipos;
	
	forr(i,0,cantidadTipos) {
		cin >>medias[i];
	};
	
	
	TodosUNo(medias, cantidadTipos)? cout << "-1 \n":cout << cantidadTipos+1 << "\n";
	
	
	return 0;
}

bool TodosUNo (long long medias[], int cantidadTipos) {
	
	forr(i,0, cantidadTipos) {
		if(medias[i]!=1) {
			return false;
		}
	}
	
	return true;
}
