#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int casos,anios, poblacionA, poblacionB;
	double crecimientoA, crecimientoB;
	
	cin >>	casos;
	
	while(casos--) {
		
		cin >> poblacionA >> poblacionB >> crecimientoA >> crecimientoB;
		
		anios=0;
		
		while ((poblacionA<=poblacionB) && (anios<=100)){
			
			poblacionA += (poblacionA*(crecimientoA/100));
			poblacionB += (poblacionB*(crecimientoB/100));
			
			anios++;
			
		}
		
		if (anios<=100){
			cout << anios << " anos." << endl;
		}else {
			cout << "Mais de 1 seculo." << endl;
		}
		
		
	}
	
	return 0;
}

