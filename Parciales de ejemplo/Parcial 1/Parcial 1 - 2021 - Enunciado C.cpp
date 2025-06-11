#include <iostream>

using namespace std;

int Cfunction(int, int);

int main(int argc, char *argv[]) {
	
	int X, Y, aux,digits=0,cond=1;
	
	while(cond){
		cin >> X >> Y;
		if ((X%2==0 && Y%2==0)){
			cond--;
		}else if((X%2!=0 && Y%2!=0)) {
			cond--;
		};
	}
	int num=X+Y;
	
	if(X<Y){
		aux=Y;
		Y=X;
		X=aux;
	}

	
	do{
		num/=10;
		digits++;
	}while(num);
	
	cout << Cfunction(X,Y) << endl;
	cout << digits << endl;
	
	return 0;
}

int Cfunction(int X, int Y){
	int sum=0;
	
	for (int i=Y; i<=X; i++){
		if (i%2==0){
			sum+=i;
		}
	}
	return sum;
}
