#include <iostream>
using namespace std;

bool InFunction(int, int, int, int);
//PENDIENTE
int main(int argc, char *argv[]) {
	
	int X1,Y1,X2,Y2;
	//Se ingresan P1 y P2
	cin >> X1 >> Y1 >> X2 >> Y2;
	
	/*
		Salidas:
		-"Todos los puntos se encuentran dentro del rectangulo"	V
		-"Hay un unico punto fuera del rectangulo"	V
		-"El punto mas cercano a P1 es PX a S saltos"
	*/
	
	//Se ingresa P3 y P4
	cin >> X3 >> Y3 >> X4 >> Y4;
	
	if((InFunction(X1,Y1,X2,Y2))){
		cout << "Todos los puntos se encuentran dentro el rectangulo" << endl;
	}else{
		cout << "Hay un unico punto fuera del rectangulo" << endl;
	};
	
	
	return 0;
}

bool InFunction(int X1, int X2, int Y1, int Y2){
	int PX1=1;
	int PY1=2;
	
	int PX2=6;
	int PY2=4;
	
	if(((X1>=PX1) && (X1<=PX2))&&((X2>=PX2) && (X2<=PX2))){
		if (((Y1>=PY1) && (Y1<=PY2))&&((Y2>=PY2) && (Y2<=PY2))){
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	}
}
