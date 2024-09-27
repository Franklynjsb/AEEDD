#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int number, vector[1000], numeroContador=0;
	
	cin >> number;
	
	for (int i=0; i<1000; i++){
		vector[i]=numeroContador;
		
		numeroContador++;
		
		if(numeroContador==number){
			numeroContador=0;
		}
	}
	
	for (int i=0; i<
		1000; i++){
		cout << "N[" << i << "] = " << vector[i] << endl;
	}
	
	return 0;
}

