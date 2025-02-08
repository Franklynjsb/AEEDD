#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	int numero;
	
	cin >> numero;
	
	int vector[10]={numero};
	
	for (int i=1; i<10; i++){
		vector[i] = vector[i-1]*2;
	}
	
	for (int i=0; i<10; i++){
		cout << "N[" << i << "] = " << vector[i] << endl;
	}
	
	return 0;
}

