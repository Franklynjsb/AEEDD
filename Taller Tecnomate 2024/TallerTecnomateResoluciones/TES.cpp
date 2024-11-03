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

#define esPar(n) (n%2==0)? true:false
#define esLetra(c) ((c>='a')&&(c<='z'))? true : false
#define esNUmero(n) ((n>='0')&&(n<='9'))? true : false
#define raiz(n) sqrt(n)

#ifdef NANO
//local
#else
//judge
#endif

using namespace std;
string Aromatizantes (string vector[5]);
string tipoDeTe (int t);

int main(int argc, char *argv[]) {
	
	
	int t;
	string vector[5], TE, aromatizante;
	
	cin >> t;
	
	for(int i=0;i<5;i++) { 
		cin >> vector[i];
	}
	TE = tipoDeTe(t);
	aromatizante = Aromatizantes(vector);
	
	if (TE == "Te extrano") {
		cout << TE << endl;
	}else if (aromatizante!="a"){
		cout << TE + " " + aromatizante << endl;
	}else {
		cout << TE << endl;
	}
	
	return 0;
}

string Aromatizantes (string vector[5]) {
	
	if (vector[0] == "SI" && vector[1]== "SI" && vector[2] == "SI" && vector[3]=="NO" && vector[4]=="SI") {
		return "Gingergrey";
	}else if (vector[0] == "SI" && vector[1]== "SI" && vector[2] == "SI" && vector[3]=="SI" && vector[4]=="SI") {
		return "Karma";
	}else if (vector[0] == "NO" && vector[1]== "SI" && vector[2] == "NO" && vector[3]=="SI" && vector[4]=="NO") {
		return "Police";
	}else if (vector[0] == "SI" && vector[1]== "NO" && vector[2] == "SI" && vector[3]=="SI" && vector[4]=="NO")  {
		return "Golang";
	}else {
		return "a";
	}
}

string tipoDeTe (int t) {
	
	if (t>=65 && t<=75) {
		return "Te Blanco";
	}else if (t>=76 && t<=80) {
		return "Te Verde";
	}else if (t>=81 && t<=85) {
		return "Te Amarillo";
	}else if (t>=86 && t<=95) {
		return "Te Oolong";
	}else if (t>=96 && t<=110) {
		return "Te Negro";
	}else {
		return "Te extrano";
	}
	
	
	
}
