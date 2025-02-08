#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	string palabras;
	int iteraciones;
	
	while (getline(cin, palabras)) {
		iteraciones=palabras.length();
		
		for(int i=0;i<iteraciones;i++) { 
			if(palabras[i]==' ') {
				palabras[i]='_';
			}
		}
		
		cout << palabras << endl;
		
	}
	
	
	
	return 0;
}

