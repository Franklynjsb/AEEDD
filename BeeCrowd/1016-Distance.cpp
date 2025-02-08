#include <iostream>
using namespace std;
//Prototipo de la función.
void DistanceFunction (int);

int main(int argc, char *argv[]) {
	
	//Se ingresa el valor de la distancia entre los coches.
	int distance;
	cin >> distance;
	
	DistanceFunction(distance);
	
	return 0;
}

//Funcion que calcula la distancia entre ellos.
void DistanceFunction (int distance){
	//Inicializo la variable de la distancia entre ellos
	//Mientras calculo su distancia en minutos.(2/kilometro).
	int distanceBetween = distance*2;
	cout << distanceBetween << " minutos" <<endl;
}
