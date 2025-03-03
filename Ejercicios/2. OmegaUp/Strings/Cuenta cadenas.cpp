#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	int iteraciones=0, contador=0, max;
	string palabra;
	
	cin >> iteraciones;
	
	for(int k=0;k<iteraciones;k++) {
		
		cin >> palabra;
		
		max=palabra.length();
		
		
		for (int i='0'; i<='9'; i++) {
			for(int j=0;j<max;j++) { 
				if(palabra[j]==i) {
					contador++;
					break;
				}
			}
		}
		for (int i='A'; i<='Z'; i++) {
			for(int j=0;j<max;j++) { 
				if(palabra[j]==i) {
					contador++;
					break;
				}
			}
		}
		for (int i='a'; i<='z'; i++) {
			for(int j=0;j<max;j++) { 
				if(palabra[j]==i) {
					contador++;
					break;
				}
			}
		}
		
		
		cout << contador << endl;
		contador=0;
	}
	
	return 0;
}

