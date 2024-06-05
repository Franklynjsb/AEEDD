#include <iostream>
using namespace std;

int fibonacci (int n);
void iccanobif (int n);

int main(int argc, char *argv[]) {
	
	int n;
	cin >>n;
	
	iccanobif(n);
	
	return 0;
}

int fibonacci (int n){
	if (n==0 || n==1){
		return n;
	}else {
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

void iccanobif (int n) {
	if(n>=0){
		cout << fibonacci(n) << " ";
		iccanobif(n-1);
	}else {
		cout << endl;
	}
}
