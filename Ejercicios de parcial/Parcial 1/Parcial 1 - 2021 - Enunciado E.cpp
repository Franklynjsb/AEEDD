#include <iostream>
#include <iomanip>

using namespace std;

double functionE(int, int);

int main(int argc, char *argv[]) {
	
	int Izq, Der, aux=0, number;
	
	while(cin >> Izq >> Der){
		if(Izq>=100 && Der>=(Izq*3)){
			break;
		}
	};
	
	if (Izq<Der){
		aux=Izq;
		Izq=Der;
		Der=aux;
	}
	
	for(int i=Izq; i >=Der;i--){
		if((i/100) == (i%10)){
			number = i;
			break;
		}
	}
	
	cout << fixed << setprecision(2);
	cout << functionE(Izq, Der) << endl;
	cout << number << endl;
	
	
	return 0;
}

double functionE(int Izq, int Der){
	int sum=0,count=0;
	
	for(int i=Der; i<=Izq; i++){
		if(i%2==0 && i%5==0){
			sum+=i;
			count++;
		}
	}
	double prom = sum/count;
	return prom;
}


