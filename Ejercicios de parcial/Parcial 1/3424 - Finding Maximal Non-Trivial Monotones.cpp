#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	char prevChar, currentChar;
	int currentA = 0, totalA = 0;
	
	cin >> prevChar;
	for (int i = 1; i <= N; i++) {
		cin >> currentChar;
		
		if (currentChar == prevChar) {
			currentA++;
		} else {
			totalA = max(totalA, currentA);
			currentA = 0;
		}
		
		prevChar = currentChar;
	}
	
	totalA = max(totalA, currentA);
	cout << totalA << endl;
	
	return 0;
}
