#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int n, x, y, naranjas = 0, bananas = 0;
	string diasTotales = "";
	
	cin >> n;
	
	for(int i = 1; i<=n; i++){
		cin >> x >> y;
		naranjas += x;
		bananas += y;
		
		diasTotales += ("Día " + to_string(i) + " comiste " + to_string(x) + " naranjas y " + 
			to_string(y) + " bananas, total " + to_string(x+y) + " frutas.\n");
	}
	
	cout << "Has comido " << naranjas << " naranjas" << endl;
	cout << "Has comido " << bananas << " bananas" << endl;
	cout << diasTotales;
	
	return 0;
}

