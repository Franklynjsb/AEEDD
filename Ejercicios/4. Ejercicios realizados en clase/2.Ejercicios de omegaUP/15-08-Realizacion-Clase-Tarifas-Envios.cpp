#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	double peso;
	char envio;
	int Z,N;
	
	cin>>N;
	
	for(int i=0;i<N;i++) { 
		int acumulador=0;
		int costoFinal=0;
		int valor;
		while(cin>>peso, peso!=-1){
			valor=0;
			cin>>envio>>Z;
			if(envio=='S'){
				if(peso>=5){
					valor+=12000;
				}else{
					valor+=8000;
				}
			}else{
				if(peso>=5){
					valor+=21500;
				}else{
					valor+=13500;
				}
			}
			switch(Z){
			case 1: valor+=0;break;
			case 2: valor+=2000;break;
			case 3: valor+=4000;break;
			}
			acumulador++;
			costoFinal+=valor;
			cout << "Costo Paquete " << acumulador << " = " << valor << "\n";
		}
		cout << "Cliente paga $" << costoFinal << "\n";
	}		
	
	return 0;
}

