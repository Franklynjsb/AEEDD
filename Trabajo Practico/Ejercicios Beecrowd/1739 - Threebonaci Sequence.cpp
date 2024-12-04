#include <iostream>

int fibbonacci(int);
int Threebonacci (int &N, int &resultado, int &i);

using namespace std;

int main(int argc, char *argv[]) {
	
	int N, resultado=1, i=0;
	
	while (cin >> N){ //1<=N>=60
		cout << Threebonacci(N, resultado, i) << endl;
		i=0;
		resultado=1;
	}
	
	return 0;
}

bool Tiene3 (int N){
	int aux;
	while (N){
		aux=N%10;
		if(aux==3){
			return true;
		}
		N/=10;
	}
	return false;
}
	
int Threebonacci (int &N, int &resultado, int &i) {
	
	if (N== 0){
		return resultado;
	}else {
		if (resultado%3==0 || Tiene3(resultado)){
			return Threebonacci(N-1, resultado, i++);
		}
		return Threebonacci(N, resultado, i++);
	}
	
}


int fibbonacci(int X){
	if((X==0) || (X==1)){
		return X;
	}else {
		return fibbonacci(X-2)+fibbonacci(X-1);
	}
}
