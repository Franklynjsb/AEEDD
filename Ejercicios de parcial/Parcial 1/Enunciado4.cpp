#include <iostream>

using namespace std;

int vowelsFunction(char);

int main(int argc, char *argv[]) {
	
	char X,Y,W,Z;
	cin >> X >> Y >> W >> Z;
	
	/*
		Salidas
		-"Las cuatro letras son consecutivas"	v
		-"Hay al menos 3 letras que son vocales	v
		-"Hay A vocales y B consonantes"	v
		Hay un caso excepcional: si las cuatro letras corresponden a “aeio” se imprime únicamente
		“CUATRO VOCALES ORDENADAS” y ninguna afirmación más.
	*/
	
	int A = (vowelsFunction(X)+vowelsFunction(Y)+vowelsFunction(W)+vowelsFunction(Z));
	int B = 4-A;
	
	if((X=='a')&&(Y=='e')&&(W=='i')&&(Z=='o')){
		//Salida excepcion
		cout << "CUATRO VOCALES ORDENADAS" << endl;
	}else {
		//Primer salida
		if((X==Y-1)&&(Y==W-1)&&(W==Z-1)&&(Z==W+1)){
			cout << "Las cuatro letras son consecutivas" << endl;
		}else {
			//Segunda salida
			if(A>=3){
				cout << "Hay al menos " << A << " letras que son vocales" << endl;
			}
		}
		
		//Tercer salida
		cout << "Hay " << A << " vocales y " << B << " consonantes" << endl;
	}
	
	
	return 0;
}

int vowelsFunction(char X){
	switch(X){
	case 'a':
		return 1;
		break;
	case 'e':
		return 1;
		break;
	case 'i':
		return 1;
		break;
	case 'o':
		return 1;
		break;
	case 'u':
		return 1;
		break;
	default:
		return 0;
	}
}
