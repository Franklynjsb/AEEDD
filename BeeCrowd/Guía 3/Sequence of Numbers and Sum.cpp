#include <iostream>

using namespace std;

int main() {
	
	int M,N;

	
	while(cin >> M >> N){
		if (M!=0 && N!0 && M>0 && N>0){
			;
			int Sum=0;
			
			if (M>N){
				for (int i=N; i<=M ; i++){
					Sum+=i;
					cout << i << " ";
				}
				
				cout << "Sum=" << Sum <<endl;
			}else {
				for (int i=M; i<=N ; i++){
					Sum+=i;
				}
				cout << Sum <<endl;
			}
		}
	};
	
	return 0;
}
