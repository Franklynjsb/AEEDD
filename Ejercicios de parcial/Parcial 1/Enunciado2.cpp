#include <iostream>
#include <iomanip>

using namespace std;

void MayorFunction(int, int, int, int, int);
void AppearFunction(int, int, int, int, int);
void NonFunction(int, int, int, int, int);

int main(int argc, char *argv[]) {
	
	//Todos entre 1 y 3;
	int A,B,C,D,E;
	cin >> A >> B >> C >> D >> E;
	
	/*
		Salidas:
		-"Hay un valor que aparece más veces que otros dos"		V
		-"Hay dos valores que aparecen 2 veces"		V
		-"Hay dos valores que no aparecen" 		
		-El promedio de los 5 valores es: R" 	V
	*/
	
	
	MayorFunction(A,B,C,D,E);
	AppearFunction(A,B,C,D,E);
	NonFunction(A,B,C,D,E);
	
	
	double R =(A+B+C+D+E)/5.00;
	cout << fixed << setprecision(2);
	cout << "El promedio de los 5 valores es: " << R << endl;
	
	return 0;
}

void MayorFunction(int A, int B, int C, int D, int E){
	for (int i=1; i<=3; i++){
		if(A==i){
			if(B==i){
				if(C==i){
					cout << "Hay un valor que aparece más veces que otros dos"<< endl;
				}else if(D==i){
					cout << "Hay un valor que aparece más veces que otros dos"<< endl;
				}else if (E==i){
					cout << "Hay un valor que aparece más veces que otros dos"<< endl;
				}
			}else if(C==i){
				if(D==i){
					cout << "Hay un valor que aparece más veces que otros dos"<< endl;
				}else if(E==i){
					cout << "Hay un valor que aparece más veces que otros dos"<< endl;
				}
			}else if(D==i && E==i){
				cout << "Hay un valor que aparece más veces que otros dos"<< endl;
			}
		}else if (B==i) {
			if(C==i){
				if(D==i){
					cout << "Hay un valor que aparece más veces que otros dos"<< endl;
				}else if (E==i){
					cout << "Hay un valor que aparece más veces que otros dos"<< endl;
				}
			}else if(D==i && E==i){
				cout << "Hay un valor que aparece más veces que otros dos"<< endl;
			}
		} else if(C==i){
			if(D==i && E==i){
				cout << "Hay un valor que aparece más veces que otros dos"<< endl;
			}
		}
	}
}

void AppearFunction(int A, int B, int C, int D, int E){
	
	int count=0;
	for (int i=1; i<=3; i++){
		if(A==i){
			if(B==i){
				count++;
			}else if(C==i){
				count++;
			}else if(D==i){
				count++;
			}else if(E==i){
				count++;
			}
		}else if (B==i) {
			if(C==i){
				count++;
			}else if(D==i){
				count++;
			}else if(E==i){
				count++;
			}
		}else if (C==i){
			if(D==i){
				count++;
			}else if(E==i){
				count++;
			}
		}else if(D==i){
			if(E==i){
				count++;
			}
		}
	}
	if(count==2){
		cout << "Hay dos valores que aparecen 2 veces" << endl;
	}
}
	
void NonFunction(int A, int B, int C, int D, int E){
	int count = 0;
	for (int i=1;i<=3;i++){
		if((A!=i)&&(B!=i)&&(C!=i)&&(D!=i)&&(E!=i)){
			count ++;
		}
	}
	if(count==2){
		cout << "Hay dos valores que no aparecen" << endl;
	}
}
