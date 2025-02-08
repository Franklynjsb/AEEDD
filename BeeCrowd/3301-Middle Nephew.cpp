#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int H, Z, L;
	
	cin >> H >> Z >> L;
	
	if ((H > Z) && (H > L)) {
		//El segundo mayor al tercero
		if (Z > L){
			
			cout << "zezinho" << endl;
			
			//El tercero mayor al segundo
		} else {
			cout << "luisinho" << endl;
		}
		
		//Si el primero no cumple con la primer lógica, se compara el segundo con los otros.
	} else if ((Z > L) && (Z > H)) {
		//El primero mayor al tercero
		if (H > L){
			cout << "huguinho" << endl;
			//El tercero mayor al primero
		} else {
			cout << "luisinho" << endl;
		}
		
		//El tercero mayor al resto
	}else if ((L > H) && (L > Z)) {
		//El segundo mayor al primero
		if (Z > H){
			cout << "zezinho" << endl;
			//El primero mayor al segundo
		} else {
			cout << "huguinho" << endl;
		}
	}
	
	return 0;
}
