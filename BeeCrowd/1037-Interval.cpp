#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float number;
	
	cin >> number;
	
	if (number >= 0) {
		if(number <= 25) {
			cout << "Intervalo [0,25]" << endl;
		}else if (number <= 50) {
			cout << "Intervalo (25,50]" << endl;
		}else if (number <= 75) {
			cout << "Intervalo (50,75]" << endl;
		}else if(number <=100) {
			cout << "Intervalo (75,100]" << endl;
		}else {
			cout << "Fora de intervalo" << endl;
		}
	}else {
		cout << "Fora de intervalo" << endl;
	}
	
	return 0;
}
