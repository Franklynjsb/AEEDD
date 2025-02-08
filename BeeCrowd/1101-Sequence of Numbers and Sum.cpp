#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int M=0, N=0;
	
	do{
		int Sum=0;
		
		cin >> M >> N;
		
		if (M>0 && N>0){
			if(M>N){
				for(; N<=M; N++){
					cout << N << " ";
					Sum+=N;
				}
				cout << "Sum=" << Sum;
			}else{
				for(; M<=N; M++){
					cout << M << " ";
					Sum+=M;
				}
				cout << "Sum=" << Sum;
			}
			cout << endl;
		}
	}while(M>0 && N>0);
	
	return 0;
}

