#include <iostream>
#include <string>
using namespace std;
//TERMINAR

bool Anagrama (string palabra1, string palabra2);

int main(int argc, char *argv[]) {
	
	string palabra1, palabra2;
	
	cin >> palabra1 >> palabra2;
	
	if(Anagrama(palabra1, palabra2)) {
		cout << "ANAGRAMA!" << endl;
	}else {
		cout << "No :(" << endl;
	}
	
	
	
	return 0;
}

bool Anagrama (string palabra1, string palabra2) {
	int longitud = palabra1.length();
	
	for (int j='a'; j<='z'; j++) {
		for(int i=0;i<longitud;i++) { 
			if(palabra1[i]==j) {
				
			}
		}
	}
	
	return true;
}
