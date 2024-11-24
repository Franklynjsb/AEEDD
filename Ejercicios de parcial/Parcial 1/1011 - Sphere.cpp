#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	
	double volume, R;
	
	cin >> R ;
	
	volume = (4/3.0)*(3.14159)*(R*R*R);
	
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << volume << endl;
	
	return 0;
}

