#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int N, V;
	
	while (cin >> N >> V, N!=0 || V!=0) {
		
		bool acerto = false;
		
		//Se prueban todas las velocidades iniciales posibles
		for (int i=1; i<=V; i++){
			
			int distancia = 0;
			
			//Velocidad a la que la pelota esta yendo
			for (int j=i; j>=1; j--){
				
				//la pelota pica j veces a velocidad j
				for (int k=0; k<j; k++) {
					
					distancia+=j;
					
					if (distancia==N){
						acerto=true;
					}
				}
			}
		}
		
		//Segun si acertó o no se muestra un mensaje
		if (acerto){
			cout << "possivel" << endl;
		} else {
			cout << "impossivel" << endl;
		}
	}
	
	return 0;
}
