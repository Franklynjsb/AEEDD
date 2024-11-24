#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	long casos, poblacionA, poblacionB;
	double crecimientoA, crecimientoB;
	
	cin >>	casos;
	
	while (casos--){
		cin >> poblacionA >> poblacionB >> crecimientoA >> crecimientoB;
		
		long anos=0;
		
		while (poblacionA<=poblacionB){
			poblacionA += (poblacionA*(crecimientoA/100));
			poblacionB += (poblacionB*(crecimientoB/100));
			anos++;
		}
		
		if(anos>100){
			cout << "Mais de 1 seculo." << endl;
		}else {
			cout << anos << " anos." << endl;
		}
		
	}
	
	return 0;
}

