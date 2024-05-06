#include <iostream>

using namespace std;

int main() {
	
	int N;
	
	cin >> N;
	
	//Por cada numero de i partiendo desde 1, escribe el resultado de la multiplicación
	for (int i=1; i<=10;i++){
		cout << i << " x " << N << " = " << i*N << endl;
	}
	
	
	return 0;
}
