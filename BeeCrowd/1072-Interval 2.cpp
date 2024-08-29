#include <iostream>

using namespace std;

int main() {
	
	int X,N,Nin=0,Nout=0;
	
	cin >>X;
	
	while (X>10000 || X<-10000){
		cin >> X;
	};
	
	for (int i=1;i<=X;i++){
		
		cin >> N;
		
		if (N<0){
			N*=-1;
		}
		
		if(N>=10 && N<=20){
			Nin++;
		}else {
			Nout++;
		};		
	};
	
	cout << Nin << " in" << endl;
	cout << Nout << " out" << endl;
	
	return 0;
}
