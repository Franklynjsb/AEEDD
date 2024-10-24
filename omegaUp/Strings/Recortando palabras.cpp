#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	int longitud;
	string palabra;
	
	cin >> palabra >> longitud;

	cout << palabra.substr(0,longitud) + palabra.substr(palabra.length()-longitud, longitud) << endl;
	
	return 0;
}

