#include <iostream>
using namespace std;

int main() {
	int numeroInicial, contadorModificaciones = 0;
	cin>>numeroInicial;
	
	if (numeroInicial%2 == 0){
		numeroInicial = (numeroInicial/2);
		contadorModificaciones++;
	}else {
		numeroInicial++;
		contadorModificaciones++;
	}
	
	if (numeroInicial >= 100) {
		numeroInicial = numeroInicial/100;
		contadorModificaciones++;
	}else if (numeroInicial >= 10){
		numeroInicial = numeroInicial/10;
		contadorModificaciones++;
	}
	
	if ((numeroInicial%3) == 0){
		numeroInicial--;
		contadorModificaciones++;
	}
	
	cout<<numeroInicial<<" "<<contadorModificaciones<<endl;
	return 0;
}
