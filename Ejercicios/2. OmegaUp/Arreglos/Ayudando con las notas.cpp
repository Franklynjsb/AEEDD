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

	double notas[10]={};
	int prom=0, reg=0, lib=0, posicionMayor=0, posicionMenor=0;
	double suma=0, mayor=0, menor=999;
	
	forn(i,10){
		cin>>notas[i];
		suma+=notas[i];
		
		if(notas[i]>mayor){
			mayor=notas[i];
			posicionMayor=i+1;
		}
		if(notas[i]<menor){
			menor=notas[i];
			posicionMenor=i+1;
		}
		if(notas[i]>=70)prom++;
		else if(notas[i]>=50 && notas[i]<70)reg++;
		else lib++;
	};
	double promedio = suma/10.00;
	double aprobados = ((prom+reg)*100)/10.00;
	
	cout << fixed<< setprecision(2);
	cout << "Nota promedio del grupo: " << promedio << "\n";
	cout << "Nota mas alta: "<< mayor << " (posicion " << posicionMayor << ")\n";
	cout << "Nota mas baja: "<< menor << " (posicion " << posicionMenor << ")\n";
	cout << "Promocionados: " << prom << ". Regulares: " << reg << ". Cantidad de estudiantes con nota < 50: " << lib << "\n";
	cout << "Porcentaje de aprobados: " << aprobados << "%\n";
	
	
	return 0;
}


