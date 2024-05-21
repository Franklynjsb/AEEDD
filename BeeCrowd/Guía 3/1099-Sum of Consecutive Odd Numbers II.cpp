#include <iostream>

using namespace std;

int main() {
	
	int N,X,Y;
	
	cin >> N;
	
	for (int i=1; i<=N;i++){
		int Sum=0;
		
		cin >> X >> Y;
		
		if (X<Y){
			for (int i=X+1;i<Y;i++){
				if(i%2!=0){
					Sum+=i;
				}
			}
		}else {
			for (int i=Y+1;i<X;i++){
				if(i%2!=0){
					Sum+=i;
				}
			}
		}
		cout << Sum <<endl;
	}
	
	
	return 0;
}
