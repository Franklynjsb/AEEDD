#include <bits/stdc++.h>

using namespace std;

void Contadores(int k, int&mayorPar, int &contImpares, int&contPares, int& contDig ){
	int dig;
	do{
		dig=k%10;
		contDig++;
		if(dig%2==0) contPares++;
		else contImpares++;
		k/=10;
	} while(k);
}

int main() {
	
	int k,contPasos=0, mayorPar=0, totalClaves=0,totalFallos=0, contImpares=0,contPares=0,contDig=0;
	bool completamentePar=false;
	
	while(cin>>k,k){
		Contadores(k, mayorPar, contImpares, contPares, contDig);
		
		if(contPares>contImpares)contPasos++;
		else totalFallos++;
		
		if (contPares) {
			if (mayorPar<k) mayorPar=k;
		}
		
		if(contDig==contPares) completamentePar=true;
		
		totalClaves++;
		contImpares=0;
		contPares=0;
		contDig=0;
	}
	
	cout << contPasos << "\n";
	cout << mayorPar << "\n";
	double porcentaje = (totalFallos/totalClaves)*100.00;
	cout << fixed << setprecision(2) << porcentaje << "%\n";
	if(completamentePar) cout << "Hubo algun numero completamente par\n";
	else cout << "No se encontro un numero completamente par\n";
	
	return 0;
}



