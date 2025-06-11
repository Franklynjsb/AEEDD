#include <iostream>

int fibbonacci(int);

using namespace std;

int main(int argc, char *argv[]) {
	
	int N;
	
	cin >> N;
	
	for(int i=0; i<N; i++){
		
		if(i==(N-1)){
			cout << fibbonacci(i) << endl;
		}else {
			cout << fibbonacci(i) << " ";
		}
	}
	
	return 0;
}

int fibbonacci(int X){
	if((X==0) || (X==1)){
		return X;
	}else {
		return fibbonacci(X-2)+fibbonacci(X-1);
	}
}
