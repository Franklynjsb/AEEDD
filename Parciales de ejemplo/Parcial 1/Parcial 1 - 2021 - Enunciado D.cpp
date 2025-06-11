#include <iostream>
using namespace std;

int Dfunction (int, int);

int main(int argc, char *argv[]) {
	
	int A,B,count=1;
	
	while(count){
		cin >> A >> B;
		
		if(((A%2!=0) && (B%2!=0))||((A%2==0) && (B%2==0))){
			if(A!=B){
				count--;
			}
		}
	}
	
	//Salida -productoria de los numeros pares entre ellos.
	cout << Dfunction(A,B) << endl;
	
	int multi = A*B;
	int digits=0;
	while (multi){
		multi/=10;
		digits++;
	}
	
	cout << digits << endl;
	
	return 0;
}

int Dfunction(int A, int B){
	int aux=0,mult=1;
	if(B>A){
		aux=A;
		A=B;
		B=aux;
	}
	
	for (int i = B; i<=A;i++){
		if(i%2==0){
			mult*=i;
		}
	}
	return mult;
}

