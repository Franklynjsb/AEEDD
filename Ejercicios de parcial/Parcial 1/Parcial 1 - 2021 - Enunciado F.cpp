#include <iostream>
#include <iomanip>

using namespace std;

double FFunction(int, int);

int main(int argc, char *argv[]) {
	
	int Lim1, Lim2,aux;
	
	while(cin >> Lim1 >> Lim2){
		if((Lim1>=100) &&(Lim2>=4*Lim1)){
			break;
		}
	}
	
	if(Lim1<Lim2){
		aux=Lim1;
		Lim1=Lim2;
		Lim2=aux;
	}
	
	int num, num2, secondNumber;
	
	for(int i=Lim2; i<=Lim1; i++){
		num = i%10;
		num2 = num%10;
		if(num==num2){
			secondNumber=i;
			break;
		}
	}
	cout << fixed << setprecision(2);
	cout << FFunction(Lim1, Lim2) << endl;
	cout << secondNumber <<endl;
	
	
	return 0;
}

double FFunction(int Lim1, int Lim2){
	int sum=0, count=0;
	for(int i=Lim2; i<=Lim1; i++){
		if((i%2!=0)&&(i%9==0)){
			sum+=i;
			count++;
		}
	}
	
	double prom = sum/count;
	return prom;
}
