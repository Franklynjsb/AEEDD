#include <iostream>
using namespace std;

int main() {
	double x, y, z;
	cin >> x >> y >> z;
	
	double pi = 3.141592;
	
	double resultado = (x + x * (y + (z*z))) / ((x + pi) * (y + pi));
	
	cout << resultado << endl;
	
	return 0;
}
