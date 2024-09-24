#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int K, N, M, X, Y;
	
	//divisa -> 0,0 H
	//NE -> ++ 
	//NO -> -+
	//SE -> +-
	//SO -> --
	
	while(cin>>K, K!=0){
		
		cin >> N >> M;
		
		for(int i=0; i<K; i++){
			
			cin >> X >> Y;
			
			if(X==N || Y==M){
				cout << "divisa" << endl;
				
			}else if(X>N){
				if(Y>M){
					cout << "NE" << endl;
				}else {
					cout << "SE" << endl;
				}
			}else {
				if(Y>M){
					cout << "NO" << endl;
				}else {
					cout << "SO" << endl;
				}
			}
			
		}
	}
	
	
	
	return 0;
}
