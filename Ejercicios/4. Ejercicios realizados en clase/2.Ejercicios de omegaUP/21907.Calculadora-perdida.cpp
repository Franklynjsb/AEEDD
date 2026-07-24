#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int resultado=0, numero, cantNum, tipoOpe;
	
	cin >> cantNum >> tipoOpe;
	
	cin>>resultado;
	for (int i = 1; i < cantNum;i++){
		cin >> numero;
		if (tipoOpe == 1){
			resultado += numero;
		}else if (tipoOpe == 2){
			resultado -= numero;
		}else if (tipoOpe == 3){
			resultado *= numero;
		}else if (tipoOpe == 4){
			resultado /= numero;
		}
	}
	
	cout << resultado << endl;
	
	return 0;
}
