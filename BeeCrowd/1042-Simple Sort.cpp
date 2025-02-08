#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int firstInteger, secondInteger, thirdInteger;
	cin >> firstInteger >> secondInteger >> thirdInteger;
	
	//El primero mayor al segundo y tercero
	if ((firstInteger > secondInteger) && (firstInteger > thirdInteger)) {
		//El segundo mayor al tercero
		if (secondInteger > thirdInteger){
			cout << thirdInteger << endl;
			cout << secondInteger << endl;
			cout << firstInteger << endl;
			
		//El tercero mayor al segundo
		} else {
			cout << secondInteger << endl;
			cout << thirdInteger << endl;
			cout << firstInteger << endl;
		}
		
	//Si el primero no cumple con la primer lógica, se compara el segundo con los otros.
	} else if ((secondInteger > thirdInteger) && (secondInteger > firstInteger)) {
		//El primero mayor al tercero
		if (firstInteger > thirdInteger){
			cout << thirdInteger << endl;
			cout << firstInteger << endl;
			cout << secondInteger << endl;
		//El tercero mayor al primero
		} else {
			cout << firstInteger << endl;
			cout << thirdInteger << endl;
			cout << secondInteger << endl;
		}
		
	//El tercero mayor al resto
	}else if ((thirdInteger > firstInteger) && (thirdInteger > secondInteger)) {
		//El segundo mayor al primero
		if (secondInteger > firstInteger){
			cout << firstInteger << endl;
			cout << secondInteger << endl;
			cout << thirdInteger << endl;
		//El primero mayor al segundo
		} else {
			cout << secondInteger << endl;
			cout << firstInteger << endl;
			cout << thirdInteger << endl;
		}
	}
	
	cout << endl;
	cout << firstInteger << endl;
	cout << secondInteger << endl;
	cout << thirdInteger << endl;

	
	
	return 0;
}
