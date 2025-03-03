#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	int contador=0, iteraciones;
	char letra;
	string palabra;
	
	cin >> palabra >> letra;
	
	iteraciones=palabra.length();
	for(int i=0;i<iteraciones;i++) { 
		if(palabra[i]==letra){
			contador++;
		}
	}
	
	cout << contador << endl;
	
	return 0;
}

