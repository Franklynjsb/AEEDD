#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int X, Y, Temp;
	
	cin >> X >> Y;
	
	if (X<Y) {
		Temp = Y;
		Y = X;
		X = Temp;
	}
	
	//Para cada valor entre Y y X si la resta de su division
	//por 5 es 2 o 3 imprime el número
	for(int i=Y+1; i<X; i++){
		if (i%5==2 || i%5==3){
			cout << i <<endl;
		};
	};
	return 0;
}

