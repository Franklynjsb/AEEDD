#include <iostream>
//Biblioteca de el setprecision(x).
#include <iomanip>
using namespace std;

//Prototipo de funci�n.
double PriceFunction(int, double);

int main(int argc, char *argv[]) {
	
	//Incializo e ingreso el valor de la variable.
	int FirstCode, SecondCode, FirstUnit, SecondUnit;
	double FirstPrice, SecondPrice;
	
	cin >> FirstCode >> FirstUnit >> FirstPrice;
	cin >> SecondCode >> SecondUnit >> SecondPrice;
	
	//Devuelvo el valor con 2 valores luego de la coma.
	cout << fixed << setprecision(2);
	//Devuelvo los valores sumando los resultados de la funcion
		//usada con distintos valores.
	cout << "VALOR A PAGAR: R$ " << PriceFunction(FirstUnit, FirstPrice)+ PriceFunction(SecondUnit,SecondPrice)<<endl;
	
	
	
	return 0;
}
//Hago una cundi�n que directamente calcule el valor del item seg�n el
	//precio y sus unidades.
double PriceFunction (int units, double price) {
	double value=units*price;
	return value;
}

