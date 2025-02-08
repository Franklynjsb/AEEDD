#include <iostream>
//Biblioteca del setprecision(x)
#include <iomanip>
//inicializo el valor de pi globalmente
#define pi 3.14159


using namespace std;

//Prototipos de las funciones.
void TriangleArea (float, float);
void CircleArea (float);
void TrapeziumArea (float, float, float);
void SquareArea (float);
void RectangleArea (float, float);

int main(int argc, char *argv[]) {
	
	//Inicializo e ingreso valores
	float A,B,C;
	cin >> A>>B>>C;
	
	//Fijo la precision en 3 y no pongo los couts por qe están incluidos
		//en cada función.
	cout<<fixed<<setprecision(3);
	TriangleArea(A,C);
	CircleArea(C);
	TrapeziumArea(A,B,C);
	SquareArea(B);
	RectangleArea(A,B);
	
	return 0;
}

//La función tiene como tipo void por que al devolverlos con un cout
	// sería redundante devolver otra vez el valor.
//Calcula el area del triangulo con los valores ingresados.
void TriangleArea (float A, float B){
	//Los inicio con el calculo del valor.
	float area=(A*B)/2;
	cout<<"TRIANGULO: "<<area<<endl;
}

//Calcula el circulo del triangulo con los valores ingresados.
void CircleArea (float C){
	float area=pi*C*C;
	cout<<"CIRCULO: "<<area<<endl;
}
//Calcula el trapecio del triangulo con los valores ingresados.
void TrapeziumArea (float A, float B, float C){
	float area=((A+B)/2)*C;
	cout<<"TRAPEZIO: "<<area<<endl;
}

//Calcula el cuadrado del triangulo con los valores ingresados.
void SquareArea (float B){
	float area=B*B;
	cout<<"QUADRADO: "<<area<<endl;
}

//Calcula el rectangulo del triangulo con los valores ingresados.
void RectangleArea (float A, float C){
	float area=A*C;
	cout<<"RETANGULO: "<<area<<endl;
}
