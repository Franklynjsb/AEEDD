#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	string bits;
	int iteraciones, contadorUno=0;
	
	getline(cin, bits);
	

	iteraciones= bits.length();
	for(int i=0;i<iteraciones;i++) { 
		if(bits[i]-'0'==1) {
			contadorUno++;
		}
	}
	
	if (contadorUno%2==0) {
		bits.append("0");
	}else {
		bits.append("1");
	}
	
	cout << bits << endl;
	
	return 0;
}

