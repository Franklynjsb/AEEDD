#include <iostream>
using namespace std;

void saca(int vector[], int& elementos, int numero);
void mete(int vector[], int& elementos, int numero);

int main(int argc, char *argv[]) {
	
	
	int vector[1000]={0};
	int elementos=0, numero, contador;
	
	cin >> contador;
	
	while (contador--){
		cin  >> numero;
		
		if(numero>elementos){
			mete(vector, elementos, numero);
		}else {
			saca(vector, elementos, numero);
		}
	}
	
	cout << elementos << endl;
	
	for(int i=elementos-1; i>=0; i--){
		cout << vector[i] << " ";
	}
	
	return 0;
}

void saca(int vector[], int& elementos, int numero){
	for(int i=0;i<numero;i++) { 
		vector[elementos]=0;
		elementos--;
	}
}

	
void mete(int vector[], int& elementos, int numero){
	vector[elementos]=numero;
	elementos++;
	
}
