#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	int A,B,C,D;
	cin >> A >> B >> C >> D;
	/*
		salidas:
		-Hay una escalera de al menos tres numeros crecientes consecutivos
		-Todos los datos son diferentes
		-El numero mágico es: K
		Excepcion sin salidas:
		“A es múltiplo de 9, D es 3, C es divisible por
		5 y B es la mitad de 14”.
	*/
	
	//Condicion sin salida
	if((A%9==0)&&(B==7)&&(C%5==0)&&(D==3)){
		
	}else {
		//Primera salida
		if((A==(B-1)) && (B==(C-1)) && (C==(D-1))){
			cout << "Hay una escalera de al menos tres numeros crecientes consecutivos" << endl;
		}else if ((B==(C-1)) && (C==(D-1))){
			cout << "Hay una escalera de al menos tres numeros crecientes consecutivos" << endl;
		}
		
		//Segunda salida
		if(A!=B && A!=C && A!=D){
			if(B!=C && B!=D && C!=D){
				cout << "Todos los numeros son diferentes" << endl;
			}
		}
		
		//Tercera salida
		double M_PI=3.14, magicNumber;
		A*=1000;
		B*=100;
		C*=10;
		magicNumber=(A+B+C+D)* M_PI;
		
		cout << "El numero mágico es: " << magicNumber <<endl;
	}
	
	return 0;
}

