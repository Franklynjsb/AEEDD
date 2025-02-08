#include <iostream>
using namespace std;

//Prototipo y funcion conjunta
int sumOfDigitsFunction(int n) {
	int sum = 0;
	//mientras el numero no sea 0 u 0,algo iterar...
	while (n > 0) {
		//a la sumatoria de digitos le doy el dato del sobrante de n/10
		sum += n % 10;
		//n toma el valor de la division por 10 quitando el sobrante por ser entero
		n /= 10;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	
	int n, m;
	//n -> cantidad de digitos m-> numeroDigitado
	while (cin >> n >> m) {
		//Variable que toma elñ valor de salida de la función
		int digitSum = sumOfDigitsFunction(m);
		
		//Si es divisiblñe por 3, ejecuta:
		if (digitSum % 3 == 0) {
			cout <<digitSum<< " sim" << endl;
		} else {
			cout <<digitSum << " nao" << endl;
		}
	}
	
	return 0;
}

