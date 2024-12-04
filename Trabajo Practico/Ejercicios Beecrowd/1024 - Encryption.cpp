#include <iostream>
#include <string>
using namespace std;

void Encriptar(string& palabra);
void Invertir (string &palabra);
bool esLetra (char caracter);
int main(int argc, char *argv[]) {
	
	int casos;
	string palabra;
	
	cin >> casos;
	
	cin.ignore();
	while (casos--){
		getline(cin, palabra);
		Encriptar(palabra);
		cout << palabra <<endl;
	}
	
	return 0;
}
void Invertir (string &palabra) {

	string aux = palabra;
	
	int letras = palabra.length(), i=0;
	
	while(letras--){ 
		aux[i]=palabra[letras];
		i++;
	}
	palabra = aux;

}

bool esLetra (char caracter){
	if((caracter>='a' && caracter<='z') || (caracter>='A' && caracter<='Z')){
		return true;
	}
	return false;
}

void Encriptar(string& palabra) {
	int largo = palabra.length();
	
	
	for(int i=0;i<largo;i++) { 
		if(esLetra(palabra[i])){
			palabra[i] = palabra[i]+3;
		}
	}
	Invertir(palabra);
	
	for(int i=(largo/2);i<largo;i++) { 
		palabra[i] = palabra[i]-1;
	}
}
