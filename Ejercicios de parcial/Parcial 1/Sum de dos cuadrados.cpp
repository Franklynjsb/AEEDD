#include <iostream>
#include <cmath>
using namespace std;

bool Function(int);

int main(int argc, char *argv[]) {
	
	int N;
	cin>>N;
	
	if (Function(N)){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	
	
	return 0;
}

bool Function(int N){
	bool Aux=false;
	
	for (int A=1; A < sqrt(N); A++){
		for (int B=1; B <sqrt(N); B++){
			if (N==(B*B+A*A)){
				Aux = true;
			}
		}
	}
	return Aux;
	
}
