#include <iostream>

bool esPerfecto(int);

using namespace std;

int main(int argc, char *argv[]) {
	
	int casos;
	long numero;
	
	cin >> casos;
	
	while (casos--){
		
		cin >> numero;
		
		if (esPerfecto(numero)){
			cout << numero << " eh perfeito" << endl;
		}else {
			cout << numero << " nao eh perfeito" << endl;
		}
		
	}
	
	return 0;
}

bool esPerfecto(int numero){
	
	int sum=0;
	
	for(int i=1; i<numero; i++){
		if(numero%i==0){
			sum+=i;
		}
	}
	
	if(numero==sum){
		return true;
	}else {
		return false;
	}
	
}
