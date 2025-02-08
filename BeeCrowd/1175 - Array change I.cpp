#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int vector[20], number;
	
	
	for(int i=0; i<20; i++){
		cin >> number;
		vector[i]=number;
	}
	
	for (int i=20; i>0; i--){
		cout << "N[" << i << "] = " << vector[i] << endl;
	}
	
	
	return 0;
}

