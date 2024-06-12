#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char caracter;
	int offset;
	
	cin >> caracter >> offset;
	
	caracter += offset;
	
	if (caracter > '9'){
		caracter= caracter%('9'+1)+'0';
	}else if (caracter<0){
		caracter = '9'+1-('0'-caracter);
	}
	
	cout << caracter;
	
	return 0;
}

