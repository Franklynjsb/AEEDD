#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	int tamanio;
	string palabra;
	
	cin >> tamanio >> palabra;
	
	if (tamanio>10) {
		cout << palabra.front();
		cout << tamanio-2;
		cout << palabra.back() << endl;
	}else {
		cout << palabra << endl;
	}
	
	return 0;
}

