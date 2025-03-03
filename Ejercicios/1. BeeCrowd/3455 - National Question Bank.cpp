#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	//graph - dynamics - geometry
	long long A, B, C;
	char caracter;
	
	// 3 graph = 2 dynamics
	// 2 geometry = 5 graph
	
	cin >> A >> B >> C;
	
	long double graph = (B*1.50) + (C*2.50);
	long double dynamic = (C*2.5)+A;
	long double geometry = (A*0.40) + (B*0.60);
	//caracter ingresado
	cin >> caracter;
	
	switch (caracter){
	case 'A': //graph
		A+=graph;
		cout << A << endl; 
		break;
	case 'B': //dynamics
		B+=dynamic/1.5;
		cout << B << endl;
		break;
	case 'C': //geometry
		C+=geometry;
		cout << C <<endl;
		break;
	}
	
	return 0;
}

