#include <iostream>
#include <iomanip>

using namespace std;

void orderFunction(int, int, int);

int main(int argc, char *argv[]) {
	
	int A,B,C;
	cin >> A >> B >> C;
	
	/*
		Salidas:
		-"Los tres valores se encuentran ordenados de menor a mayor"	V
		-"Los tres valores son positivos y múltiplos de tres"	V
		-"El promedio entre el menor y el mayor de los tres valores es: P"
	*/
	
	
	
	//Primer salida
	if(A<B && B<C){
		cout << "Los tres valores se encuentran ordenados de menor a mayor" << endl;
	}
	
	//Segunda salida
	if(A>0 && B>0 && C >0){
		if((A%3==0)&&(B%3==0)&&(C%3==0)){
			cout << "Los tres valores son positivos y múltiplos de tres" << endl;
		}
	}
	
	//Tercera Salida
	double P=0;
	if(A>B){
		if(B>C){
			P = (A+C)/2.000;
		}else {
			P = (A+B)/2.000;
		}
	}else if(A<B){
		if(B<C){
			P = (A+C)/2.000;
		}else{
			P = (A+B)/2.000;
		}
		
	}
	cout << fixed << setprecision(3);
	cout << "El promedio entre el menor y el mayor de los tres valores es: " << P << endl;
	
	orderFunction(A,B,C);
	
	return 0;
}

void orderFunction(int A, int B, int C){
	int X=0,aux=0;
	//Cantidad de intercambios para ordenarlos y su auxiliar;
	if(A>B){
		X++;
		aux=A;
		A=B;
		B=aux;
		if(B>C){
			X++;
			aux=B;
			B=C;
			C=aux;
		}
	}else {
		if(B>C){
			X++;
			aux=B;
			B=C;
			C=aux;
		}
	}
	if(X!=0){
		cout << "Cantidad minima de intercambios= " << X << endl;
	}
}

