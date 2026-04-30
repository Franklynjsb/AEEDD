#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)

using namespace std;

int main() {
	
	int n, x, y;
	int totalNaranjas=0, totalBananas=0, totalFrutasDelDia=0;
	string totales = "";
	
	cin>>n;
	
	if (n<=0){
		cout << "No comiste nada\n";
	}
	else{
		string resultadoNaranjas = "";
		string resultadoBananas = "";
		string resultadoFrutas = "";
		string dias = "";
		
		for(int i=0;i<n;i++) {  
			cin >> x >> y;
			
			totalNaranjas += x;
			totalBananas += y;
			totalFrutasDelDia += x+y;
			
			/////////////////////////////////
			if(x==0) resultadoNaranjas = "0";
			else{
				while(x>0){
					resultadoNaranjas = (char)('0'+(x%10))+resultadoNaranjas;
					x/=10;
				}
			}
			/////////////////////////////////
			
			/////////////////////////////////
			if(y==0) resultadoBananas = "0";
			else{
				while(y>0){
					resultadoBananas = (char)('0'+(y%10))+resultadoBananas;
					y/=10;
				}
			}
			/////////////////////////////////
			
			/////////////////////////////////
			if(totalFrutasDelDia==0) resultadoFrutas = "0";
			else{
				while(totalFrutasDelDia>0){
					resultadoFrutas = (char)('0'+(totalFrutasDelDia%10))+resultadoFrutas;
					totalFrutasDelDia/=10;
				}
			}
			/////////////////////////////////
			
			/////////////////////////////////
			int j= i+1;
			while(j>0){
				dias = (char)('0'+(j%10))+dias;
				j/=10;
			}
			
			/////////////////////////////////
			
			totales += "Día " + dias + " comiste " + resultadoNaranjas +" naranjas y " + resultadoBananas + " bananas, total " + resultadoFrutas + " frutas.\n";
			
			
			totalFrutasDelDia=0;
			resultadoNaranjas = "";
			resultadoBananas = "";
			resultadoFrutas = "";
			dias="";
		}
		
		cout << "Has comido " << totalNaranjas << " naranjas\n";
		cout << "Has comido " << totalBananas << " bananas\n";
		cout << totales;
	}
	
	
	return 0;
}
