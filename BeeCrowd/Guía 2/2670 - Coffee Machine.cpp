#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//3 pisos.
	int A1, A2, A3;
	
	cin >> A1 >> A2 >> A3;
	
	//Minutos que tomaría poner la máquina en cada uno.
	int minutesA1 = (A2*2) + (A3*4);
	int minutesA2 = (A1*2) + (A3*2);
	int minutesA3 = (A1*4) + (A2*2);
	
	//Devuelve el menor tiempo de los tres.
	if ((minutesA1 < minutesA2) && (minutesA1 < minutesA3)){
		
		cout << minutesA1 << endl;
		
	}else if ((minutesA2 <= minutesA1) && (minutesA2 <= minutesA3)){
		/*
			En el piso 2 SIEMPRE tendrás menos minutos si 
			tienes mayor o IGUAL número 
			de personas que los otros pisos.
		*/
		cout << minutesA2 << endl;
		
	}else{
		cout << minutesA3 << endl;
	}
	
	/*
	Esto está mal por que consideraba la cantidad de personas
	pero no el tiempo que podrían llegar a tardar.
	
	
	if (A1>A2 && A1>A3) {
		//Son el doble de minutos por que toma uno para ir y otro para volver
		//Mientras que el otro son 4 por que atraviesan el piso 2 antes de llegar al 1.
		minutes = (A2*2)+(A3*4);
		
	}else if (A2>A1 && A2>A3){
		
		//La cantidad de minutos es la misma por que son los mismos minutos.
		minutes = (A1+A3)*2;
		
	}else if (A3>A1 && A3>A2){
		
		//Pasa lo mismo que el primer caso pero con otros valores.
		minutes = (A1*4)+(A2*2);
		
	}
	
	cout << minutes << endl;
	*/
	
	return 0;
}
