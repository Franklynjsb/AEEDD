#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int FirstNumber=0, SecondNumber=0;
	
	do{
		
		cin >> FirstNumber >> SecondNumber;
		
		if (FirstNumber!= SecondNumber) {
			if(FirstNumber>SecondNumber){
				cout << "Decrescente" << endl;
			}else{
				cout << "Crescente" << endl;
			};
		};
		
	}while(FirstNumber!= SecondNumber);
	
	return 0;
}

