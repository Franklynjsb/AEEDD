#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	
	string estado;//conectado o desconectado
	
	//Leer cadena de chars
	getline(cin, estado);
	
	if (estado.front()== 'c') {
		cout << "Ola Ivan"<< endl;
	}else {
		cout << "Ol.."<< endl;
	}
	
	
	
	return 0;
}

