#include <iostream>

using namespace std;

int main() {
	
	int N,Nin=0,Nout=0;
	
	while (cin >> N){
		if (N < 10000 && N>=0){
			if(N>=10 && N<=20){
				Nin++;
			}else {
				Nout++;
			}
		}
	};
	
	cout << Nin << " in" << endl;
	cout << Nout << " out" << endl;
	
	return 0;
}
