#include <bits/stdc++.h>

using namespace std;

//
bool esLet (char n){ return (n>='a' && n<='z');	}
bool esNum (char n){ return (n>='0' && n<='9'); }
//

int main() {
	
	char caracter;
	int digiPar=0, aux, eco=0;
	bool sec=true;
	
	while(cin>>caracter, caracter!='#'){
		
		//
		if(esNum(caracter)){
			aux=caracter-'0';
			if(aux%2==0)digiPar++;
			sec=false;
			eco=0;
		}
		//
		
		//
		else if(esLet(caracter)){
			eco++;
			sec=false;
		}else eco=0;
		//
	}
	
	cout << digiPar << "\n";
	if(sec)cout << "Secuencia vacia de poder\n";
	if(eco==3)cout << "Eco magico detectado\n";
	
	return 0;
}


