#include <iostream>

bool esPrimo(int);

using namespace std;

int main(int argc, char *argv[]) {
	
	int casos;
	long numero;
	
	cin >> casos;
	
	while (casos--){
		
		cin >> numero;
		
		if (esPrimo(numero)){
			cout << numero << " eh primo" << endl;
		}else {
			cout << numero << " nao eh primo" << endl;
		}
		
	}
	
	return 0;
}

bool esPrimo(int numero){
	
	int sum=0;
	
	for(int i=1; i<=numero; i++){
		if(numero%i==0){
			sum+=i;
		}
	}
	
	if(sum==(numero+1)){
		return true;
	}else {
		return false;
	}
	
}
