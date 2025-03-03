#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double x, y, z;
	cin >> x ;
	
	y = (x+5)/(2*(x+1));
	
	z = ((y*y)+(x*(x-(2*y))))/(x*y) ;
	
	cout << fixed << setprecision(6);
	cout << z << endl;
	
	return 0;
}
