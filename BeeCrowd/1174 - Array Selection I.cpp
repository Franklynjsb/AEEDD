#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	double vector[100], number;
	
	for (int i=0; i<100; i++){
		cin >> number;
	}
	
	cout << fixed << setprecision(1);
	
	for (int i=0; i<100; i++){
		cout << "A[" << i << "] = " << vector[i] << endl;
	}
	
	return 0;
}

