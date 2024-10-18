#include <iostream>
using namespace std;

bool TodosUNo (long long medias[], int cantidadTipos);

int main(int argc, char *argv[]) {
	
	long long medias[1000000]{}, cantidadTipos;
	
	cin >> cantidadTipos;
	
	for(int i=0;i<cantidadTipos;i++) { 
		cin >>medias[i];
	}
	
	
	
	if (TodosUNo(medias, cantidadTipos)) {
		cout << "-1" <<endl;
	}else {
		cout << cantidadTipos+1 << endl;
	}
	
	
	return 0;
}

bool TodosUNo (long long medias[], int cantidadTipos) {
	
	for(int i=0;i<cantidadTipos;i++) { 
		if(medias[i]!=1) {
			return false;
		}
	}
	
	return true;
}
